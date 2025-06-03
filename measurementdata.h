#ifndef MEASUREMENTDATA_H
#define MEASUREMENTDATA_H

#include <QObject>
#include <QVariantList>

class MeasurementData : public QObject {
    Q_OBJECT
    Q_PROPERTY(double frequency READ frequency WRITE setFrequency)
    Q_PROPERTY(double s11_real READ s11Real WRITE setS11Real)
    Q_PROPERTY(double s11_imag READ s11Imag WRITE setS11Imag)
    Q_PROPERTY(double s11_logmag READ s11Logmag WRITE setS11Logmag)
public:
    explicit MeasurementData(QObject *parent = nullptr) : QObject(parent) {}

    double frequency() const { return m_frequency; }
    void setFrequency(double freq) { m_frequency = freq; }

    double s11Real() const { return m_s11_real; }
    void setS11Real(double real) { m_s11_real = real; }

    double s11Imag() const { return m_s11_imag; }
    void setS11Imag(double imag) { m_s11_imag = imag; }

    double s11Logmag() const { return m_s11_logmag; }
    void setS11Logmag(double logmag) { m_s11_logmag = logmag; }

private:
    double m_frequency = 0.0;
    double m_s11_real = 0.0;
    double m_s11_imag = 0.0;
    double m_s11_logmag = 0.0;
};

class FileParser : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE QVariantList parseFile(const QString &filePath);
};

class DataProcessor : public QObject {
    Q_OBJECT
public:
    Q_INVOKABLE QVariantList processData(const QVariantList &data);
};

#endif // MEASUREMENTDATA_H
