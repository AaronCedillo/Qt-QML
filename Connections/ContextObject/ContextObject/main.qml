import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: mRectFirstName.width+mRectLastName.width+20
    height: 100
    title: qsTr("ContextObject")

    Rectangle {
        id: mRectFirstName
        width: mTextFirstName.implicitWidth + 20
        height: mTextFirstName.implicitHeight + 20
        color: "red"
        border.color: "black"
        Text {
            id: mTextFirstName
            anchors.centerIn: parent
            text: firstname
            font.pointSize: 20
        }
    }

    Rectangle {
        id: mRectLastName
        anchors.left: mRectFirstName.right
        anchors.margins: 20
        width: mTextLastName.implicitWidth + 20
        height: mTextLastName.implicitHeight + 20
        color: "red"
        border.color: "black"
        Text {
            id: mTextLastName
            anchors.centerIn: parent
            text: lastname
            font.pointSize: 20
        }
    }
}
