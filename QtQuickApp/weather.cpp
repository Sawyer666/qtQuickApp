#include "weather.h"

Weather::Weather(QObject *parent) : QObject(parent)
{

}

void Weather::setCity(const QString &city)
{
    m_currentCity=city;
    emit weatherChanged(getWeather(m_currentCity));
}

QString Weather::city()
{
    return  m_currentCity;
}

QString Weather::getWeather(QString city)
{

}




