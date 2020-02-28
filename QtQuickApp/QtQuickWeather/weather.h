#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QString>

class Weather : public QObject
{
    Q_OBJECT
public:
    explicit Weather(QObject *parent = nullptr);
    Q_PROPERTY(QString city READ city WRITE setCity
               NOTIFY cityChanged);
    Q_PROPERTY(QString currentWeather READ processWeather);
    void setCity(const QString& city);
    QString city();
 Q_INVOKABLE QString getWeather(QString city);
private:
    QString m_currentCity;
    QString processWeather();
signals:
    void cityChanged(QString);
    void weatherChanged(QString);

};

#endif // WEATHER_H
