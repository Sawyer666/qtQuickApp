import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.VirtualKeyboard 2.4
import com.luxoft.c005 1.0

Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Text {
        id:infopanel
        x:10
        y:10
        text: qsTr("text")
    }
    Weather{
      city:"Moscow"
    onWeatherChanged:function(p)
    {
        infopanel.text=p;
    }
    }

  Button{
      id:button
      text: "btn click"
      background: Rectangle{
      color: "red"
      }
      Button{
          id:button
          text: "btn click"
          background: Rectangle{
          color: "green"
          }
  }
}
