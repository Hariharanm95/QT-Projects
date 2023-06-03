import QtQuick.Layouts 1.12
import QtQuick.Dialogs 1.3
import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls 1.4
import Qt.labs.qmlmodels 1.0


ApplicationWindow {
    title: "Database Example"
    width: 800
    height: 600

    ColumnLayout {
        spacing: 10
        anchors.centerIn: parent

        TextField {
            id: lineEdit
            placeholderText: "Enter ID"
            Layout.fillWidth: true
        }

        TextField {
            id: lineEdit_Value1
            placeholderText: "Enter Name"
            Layout.fillWidth: true
        }

        TextField {
            id: lineEdit_Value2
            placeholderText: "Enter Roll No"
            Layout.fillWidth: true
        }

        Button {
            text: "Read"
            onClicked: {
                readData()
            }
        }

        Button {
            text: "Insert"
            onClicked: {
                insertData()
            }
        }

        Button {
            text: "Update"
            onClicked: {
                updateData()
            }
        }

        Button {
            text: "Delete"
            onClicked: {
                deleteData()
            }
        }

        TableView {
            id: tableView
            Layout.fillWidth: true
            Layout.fillHeight: true

            TableViewColumn {
                title: "ID"
                role: "id"
                width: tableView.width * 0.1
            }

            TableViewColumn {
                title: "Name"
                role: "name"
                width: tableView.width * 0.3
            }

            TableViewColumn {
                title: "Roll No"
                role: "rollno"
                width: tableView.width * 0.2
            }

            model: TableModel {
                id: tableModel
                Table {
                    id: dbTable
                    name: "users"
                }
            }
        }
    }
}
