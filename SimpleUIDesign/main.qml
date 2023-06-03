import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Grid {
        id: grid
        columns: 2
        spacing: 10
        anchors.centerIn: parent

            Rectangle{
                id: _r1;
                height: 100;
                width: 200;
                color: "green";
                Text {
                    id: _txt1
                    text: qsTr("Rectangle 1")
                    font.pixelSize: 15
                    color: "white"
                    anchors.centerIn: parent
                }
            }
            Rectangle{
                id: _r2;
                height: 100;
                width: 200;
                color: "grey";
                Text {
                    id: _txt2
                    text: qsTr("Rectangle 2")
                    font.pixelSize: 15
                    color: "white"
                    anchors.centerIn: parent
                }
            }
            Rectangle{
                id: _r3;
                height: 100;
                width: 200;
                color: "yellow";
                Text {
                    id: _txt3
                    text: qsTr("Rectangle 3")
                    font.pixelSize: 15
                    color: "black"
                    anchors.centerIn: parent
                }
            }
            Rectangle{
                id: _r4;
                height: 100;
                width: 200;
                color: "light blue";
                Text {
                    id: _txt4
                    text: qsTr("Rectangle 4")
                    font.pixelSize: 15
                    color: "white"
                    anchors.centerIn: parent
                }
            }
    }
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("Clicked")
        }
    }

}
