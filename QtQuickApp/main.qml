import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.VirtualKeyboard 2.4

Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

  Button{
      id:button
      width: 200
      height: 50
  }

}
