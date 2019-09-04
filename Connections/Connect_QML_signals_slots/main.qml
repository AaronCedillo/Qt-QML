import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 300
    height: 100
    title: qsTr("Connections QML Demo")

    Row {
        Rectangle {
            id: redRect
            width: 100
            height: 100
            color: "red"

            MouseArea {
                id: redRectMouseAreaId
                anchors.fill: parent
                onClicked: {
                    console.log("Click in the red rectangle")
                }
            }
        }
        Rectangle {
            id: blueRect
            width: 100
            height: 100
            color: "blue"

            Connections {
                target: redRectMouseAreaId
                onClicked: {
                    console.log("This is the blue rectangle responding")
                }
            }
        }
        Rectangle {
            id: greenRect
            width: 100
            height: 100
            color: "green"
        }

        Connections {
            target: redRectMouseAreaId
            onClicked: {
                console.log("This is the green rectangle responding")
            }
        }
    }
}
