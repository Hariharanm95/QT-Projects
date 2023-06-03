import QtQuick 2.12
import QtQuick.Window 2.12

Button {
    id: loginButton
    text: qsTr("Login")
    width: 100
    onClicked: {
        if(userField.text == "myUsername" && passField.text == "myPassword") {
            console.log("Login successful!")
        }
        else {
            console.log("Incorrect username or password.")
        }
    }
}
