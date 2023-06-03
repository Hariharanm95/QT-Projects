import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("My Load Image")
    Image{
        id: img1
        height: 400
        width:600

        source: "Gojo.jpg"
    }
}
