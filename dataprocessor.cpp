#include "measurementdata.h"
#include <cmath>
#include <QVariant>

QVariantList DataProcessor::processData(const QVariantList &data) {
    QVariantList result;
    for (const QVariant &item : data) {
        MeasurementData* point = qvariant_cast<MeasurementData*>(item);
        if (point) {
            double magnitude = std::sqrt(point->s11Real() * point->s11Real() +
                                         point->s11Imag() * point->s11Imag());
            point->setS11Logmag(20 * std::log10(magnitude));
            result.append(QVariant::fromValue(point));
        }
    }
    return result;
}
