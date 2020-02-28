#include "weather.h"

Weather::Weather(QObject *parent) : QObject(parent)
{

}

void Weather::setCity(const QString &city)
{
    m_currentCity = city;
    //.....
    emit weatherChanged(getWeather(m_currentCity));
}

QString Weather::city()
{
    return m_currentCity;
}

QString Weather::getWeather(QString city)
{
    //In real task you need get information
    //from weather forecast sites...8
    QString result = (city.compare("Saint Peterburg") == 0)?
                "+5 на улице 0 в воде":
                "холодно вообще";
    return result;
}

QString Weather::processWeather()
{
    return getWeather(m_currentCity);
}
