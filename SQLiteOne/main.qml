import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls 1.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column{
        spacing: 10

        TextField{
            id: usernamefield
            placeholderText: "UserName"
        }

        TextField{
            id: passwordfield
            placeholderText: "Password"
            echoMode: TextInput.Password
        }

        Button{
            text: "LOGIN"
            onClicked: {
                if(loginManager.login(usernamefield.text, passwordfield.text)){
                    console.log("Login Successful!");
                }else{
                    console.log("Login Failed");
                }
                loginManager.login(usernamefield.text, passwordfield.text);
            }
        }

    }
    LoginManager{
        id: loginManager
    }

}
