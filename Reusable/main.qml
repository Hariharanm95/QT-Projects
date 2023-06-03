import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Row{
        id:row1
        width: parent.width
        height:60
        spacing:20
        anchors.centerIn: parent;
        Mybutton{
            id:b1
            value:"CSE"
            onMyclick:{
                console.log("CSE clicked")
            }
        }
        Mybutton{
            id:b2
            value:"IT"
            onMyclick:{
                console.log("IT clicked")
            }
        }

    }

}
