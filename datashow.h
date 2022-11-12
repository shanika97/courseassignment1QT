#ifndef DATASHOW_H
#define DATASHOW_H

#include <QDialog>

namespace Ui {
class DataShow;
}

class DataShow : public QDialog
{
    Q_OBJECT

public:
    explicit DataShow(QString owner,QString nic,QString Vtype,QString Chassi,QString VNo,QString Fuel,QWidget *parent = nullptr);
    ~DataShow();

private:
    Ui::DataShow *ui;


    QString ownerdetails;
    QString NicView;
   QString Vehitypeview;
   QString Chassiview;
    QString VehiNoview;
    QString FuelView;

};

#endif // DATASHOW_H
