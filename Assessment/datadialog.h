#ifndef DATADIALOG_H
#define DATADIALOG_H

#include <QDialog>
#include <QSqlQuery>

namespace Ui {
class DataDialog;
}

class DataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DataDialog(QWidget *parent = nullptr);
    ~DataDialog();

    // Add a public function to populate the data in the tableWidget
    void populateData(const QSqlQuery &queryResult);

private:
    Ui::DataDialog *ui;
};

#endif // DATADIALOG_H
