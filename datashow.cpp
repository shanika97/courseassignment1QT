#include "datashow.h"
#include "ui_datashow.h"

DataShow::DataShow(QString owner,QString nic,QString Vtype,QString Chassi,QString VNo,QString Fuel,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataShow)
{
    ui->setupUi(this);

    ownerdetails=owner;
    ui->label_diower->setText(ownerdetails);

    NicView=nic;
     ui->label_diNic->setText(NicView);

     Vehitypeview=Vtype;
     ui->label_diVehi->setText(Vehitypeview);

     Chassiview=Chassi;
     ui->label_dichasi->setText(Chassiview);

    VehiNoview=VNo;
    ui->label_divehino->setText(VehiNoview);

    FuelView=Fuel;
    ui->label_difuel->setText(FuelView);


}

DataShow::~DataShow()
{
    delete ui;
}
