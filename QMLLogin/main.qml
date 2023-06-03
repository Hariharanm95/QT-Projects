import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls 1.4

Window {
    id: loginWindow // Added an ID to the login window for easier reference
    width: 640
    height: 480
    visible: true
    title: qsTr("SignIn")

    Rectangle{
        width: 620
        height: 460
        color: "black"
        border.width: 1
        anchors.centerIn: parent

        Column{
            spacing: 10
            anchors.centerIn: parent
            Row{
                spacing: 10

                Text {
                    color: "white"
                    text: qsTr("UserName:")
                }

                TextField {
                    id: _tx1
                    placeholderText: qsTr("Enter Name")
                }
            }
            Row{
                spacing: 10

                Text {
                    color: "white"
                    text: qsTr("Password:")
                }

                TextField {
                    id: _tx2
                    placeholderText: qsTr("Enter Password")
                }
            }
            Row{
                Button{
                    text: qsTr("LOGIN")

                    onClicked: {
                        var username = _tx1.text
                        var password = _tx2.text
                        if(username === "Hari" && password === "Hari"){
                            loginWindow.close()
                            var newWindow = Qt.createQmlObject("import QtQuick 2.12; import QtQuick.Window 2.12; import QtQuick.Controls 2.5; Window { visible: true; title: 'Success'; width: 400; height: 200; Text { text: 'Login Successful'; anchors.centerIn: parent; } }", parent, "newWindow")
                            newWindow.show()
                        } else {
                            console.log("Invalid username or password")
                        }
                    }
                }
            }
        }
    }
}
