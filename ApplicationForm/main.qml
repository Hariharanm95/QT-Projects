import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls 1.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Form")

    Rectangle{

        id: _r1
        height: 440
        width: 600
        border.color: "black"
        border.width: 1
        anchors.centerIn: parent


        Column{

            spacing: 10

            anchors.centerIn: parent

            Text {
                id: _tx1
                text: qsTr("Please fill out the form below")
            }

            TextField {
                placeholderText: qsTr("Enter Name")
            }

            TextField {
                placeholderText: qsTr("Enter Email")
            }
            CheckBox {
                text: qsTr("Subscribe")
                checked: true
            }

            RadioButton {
                text: qsTr("Male")
                checked: true
            }
            RadioButton {
                text: qsTr("Female")
            }
            Text {
                id: _tx2
                text: qsTr("Slide your age in Range")
            }
            Slider {
                maximumValue: 5.0
                stepSize: 1.0
            }

        }

    }

}
