#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QString>
class Weather : public QObject
{
    Q_OBJECT
public:
    explicit Weather(QObject *parent = nullptr);
    Q_PROPERTY(QString city READ city WRITE setCity NOTIFY cityChanged);
    void setCity(const QString& city);
    QString city();
    QString m_currentCity;
    Q_INVOKABLE QString getWeather(QString city);
signals:
void cityChanged(QString);
void weatherChanged(QString);
};

#endif // WEATHER_H
