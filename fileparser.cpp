#include "measurementdata.h"
#include <fstream>

QVariantList FileParser::parseFile(const QString &filePath) {
    QVariantList result;
    std::ifstream file(filePath.toStdString());
    if (!file.is_open()) {
        return result;
    }

    file.seekg(0, std::ios_base::end);
    std::streampos end_pos = file.tellg();
    const size_t stringSize = 56; // примерная длина строки, можно адаптировать
    size_t estimatedLines = end_pos / stringSize;
    result.reserve(int(estimatedLines)); // ускоряет push_back (внутри QVariantList -> QList)

    file.seekg(0); // вернуться в начало

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#' || line[0] == '!') {
            continue;
        }

        const char* ptr = line.c_str();
        char* end;

        double freq = std::strtod(ptr, &end);
        if (ptr == end) continue;
        ptr = end;

        double real = std::strtod(ptr, &end);
        if (ptr == end) continue;
        ptr = end;

        double imag = std::strtod(ptr, &end);
        if (ptr == end) continue;

        MeasurementData* point = new MeasurementData(this);
        point->setFrequency(freq);
        point->setS11Real(real);
        point->setS11Imag(imag);

        result.append(QVariant::fromValue(point));
    }

    return result;
}
