import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import com.example.save 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("CONTACT")
    color: "lightgreen"
    Column{
        spacing:10
        anchors.centerIn: parent
        TextField{
            id:textfield1
            placeholderText: "Enter Name here"
        }

        TextField{
            id:textfield2
            placeholderText: "Enter Contact No here"
        }
        TextField{
            id:textfield3
            placeholderText: "Enter Name while updating"
        }

        Button{
            id:savebutton
            text: "Save"
            onClicked: {
                crudmanager.save(textfield1.text,textfield2.text)
            }
        }

        Button{
            id:readbutton
            text: "Read"
            anchors.left: savebutton.right
            onClicked: {
                crudmanager.read(textfield1.text);

            }
        }

        Button{
            id:updatebutton
            text: "Update"
            onClicked: {
                crudmanager.update(textfield1.text,textfield3.text);
            }
        }

        Button{
            id:deletebutton
            text: "Delete"
            anchors.left: updatebutton.right
            onClicked: {
                crudmanager.remove(textfield1.text);
            }
        }

    }
    Crudmanager{
        id:crudmanager
    }

}
