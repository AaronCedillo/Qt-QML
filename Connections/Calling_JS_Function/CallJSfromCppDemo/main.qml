import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Call JS from C++")

    function qmlJSfunction(param) {
        console.log("QML talking, C++ called me with parameter: ", param)
    }

    Button {
        id: m_Button
        text: "Call QML function from C++"
        onClicked: {
            QmlJScaller.cppMethod("QML Calling...");
        }
    }
}
