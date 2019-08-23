import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    id: mainWindow
    visible: true
    width: 300
    height: 300
    title: qsTr("Call C++ from QML")

    Column {
        spacing: 10
        Button {
            anchors.centerIn: mainWindow
            text: "Call C++ Method"
            onClicked: {
                BWorker.regularMethod()
                BWorker.cppSlot()
            }
        }
        Rectangle {
            width: textToShowId.implicitWidht + 20
            height: 50
            color: "beige"
            Text {
                id: textToShowId
                text: BWorker.regularMethodWithReturn("Aaron", 23)
            }
        }
    }
}
