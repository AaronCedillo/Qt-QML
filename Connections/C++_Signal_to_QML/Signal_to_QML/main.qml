import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 100
    height: 100
    title: qsTr("Connections")

    Connections {
        target: CppSignalSender
        onCallQml : {
            console.log("This is QML : callQml signal cought")
            mText.text = parameter;
        }
    }

    Column {
        Button {
            text: "Call C++ Method"
            onClicked: CppSignalSender.cppSlot()
        }

        Text {
            id: mText
            text: qsTr("Default")
        }
    }
}
