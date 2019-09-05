import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 600
    height: 300
    title: qsTr("Q_PROPERTY Demo")

    Column {
        spacing: 20

        Text {
            id: titleId
            text: Movie.title
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: mainCharId
            width: 500
            text: Movie.mainCharacter
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter

            TextField {
                id: titleTextFieldId
                width: 300
            }

            Button {
                width: 200
                id: buttonTitle
                text: "Change title"
                onClicked: {
                    Movie.title = titleTextFieldId.text
                }
            }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter

            TextField {
                id: mainCharacterTextFieldId
                width: 300
            }

            Button {
                width: 200
                id: buttonMainCharacter
                text: "Change mainCharacter"
                onClicked: {
                    Movie.mainCharacter = mainCharacterTextFieldId.text
                }
            }
        }
    }
}
