import QtQuick 2.0

Rectangle {
    id:home1
    color:"blue"
    width: 150
    height: 50
    signal myclick(string value)

    signal myclick2(string value1, string value2)

    function display_2(){
        console.log("my  second method")
    }
    property string value;
    Text{
        id: name_home;
        text: home1.value;
        anchors.centerIn: parent;
        font.bold: true;
        color: "red";
        font.pixelSize: 30;
        style: Text.Outline;
        styleColor: "black"
    }
    MouseArea{
        id:msh
        anchors.fill: parent
    }

    onMyclick: {
        console.log("Signal Handled", value)
    }

    Connections{
        target:msh
        onClicked:{
            home1.myclick(name_home.text)
            home1.myclick2(name_home.text, name_home.text)
        }
    }
}
