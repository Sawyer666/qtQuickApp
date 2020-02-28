import QtQuick 2.12
import QtQuick.Window 2.12
import com.luxoft.c005 1.0
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Text
    {
        id : infoPanel
        x:10
        y:10
        width:100
        height: 200
        color: "blue"
        text: myInformer.currentWeather
    }
    Button
    {
        x:50
        y:50
        text: "Press for get weather in Moscow"
        onClicked:
        {
            var x = myInformer.getWeather("Moscow");
            infoPanel.text = x;
        }
    }
    Button
    {
     x:50
     y: 80
     text: "Press to change city"
     onClicked:
     {
         myInformer.city = "Melburne";
     }
    }

    Weather
    {
        id : myInformer
        city : "Saint Peterburg"
        onWeatherChanged : function(p) {
            infoPanel.color = "red";
            infoPanel.text = p;
        }

    }

}
