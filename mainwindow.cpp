#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     QSqlDatabase vehi=QSqlDatabase::addDatabase("QSQLITE");
    this->ui->comboBox_vehicle->addItem("- Select type - ");
     this->ui->comboBox_vehicle->addItem("VAN");
      this->ui->comboBox_vehicle->addItem("CAR");
      this->ui->comboBox_vehicle->addItem("3WEEL");
     this->ui->comboBox_vehicle->addItem("BIKE");


     //fuel
      this->ui->comboBox_fuel->addItem("- Select type - ");
        this->ui->comboBox_fuel->addItem("Petrol");
        this->ui->comboBox_fuel->addItem("Disel");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SUBMIT_clicked()
{     QSqlDatabase vehi=QSqlDatabase::addDatabase("QSQLITE");
    vehi.setDatabaseName("E:/course/c++/c++ practical/Qt/course assignmet/1QT/database/details.db");

    if(!vehi.open()){
        ui->label_status->setText("unsuccessfull register try again!");
    }else{
          ui->label_status->setText("successfully registered !");
    }


      QString own=ui->txtowner->toPlainText();
      QString nic=ui->textnic->toPlainText();

      QString vT=ui->comboBox_vehicle->currentText();
       QString cNo=ui->textEdit_casi->toPlainText();
        QString vNo=ui->textEdit_vehino->toPlainText();
        QString fuel=ui->comboBox_fuel->currentText();

      QString result;
      result.append(QString::number(nic.length()));

      if(nic.length()==10 || nic.length()==12){
         QMessageBox::information(this,"NIC number ","the lenhth is valid", QMessageBox::Ok);

      }
      else{
           QMessageBox::information(this,"NIC number ","the lenhth is invalid "+result, QMessageBox::Ok);
      }



        if(own=="" || vT== "")

}


void MainWindow::on_pushButton_clicked()
{
    QString own=ui->txtowner->toPlainText();
    QString nic=ui->textnic->toPlainText();

    QString vT=ui->comboBox_vehicle->currentText();
     QString cNo=ui->textEdit_casi->toPlainText();
      QString vNo=ui->textEdit_vehino->toPlainText();
      QString fuel=ui->comboBox_fuel->currentText();

    dialog = new DataShow(own,nic,vT,cNo,vNo,fuel,this);

    dialog->show();
    hide();

}


void MainWindow::on_pushButton_uniqe_clicked()
{/*result.reserve(statement.length() + number.length() + space.length() + period.length();
result.append(statement);
result.append(number);
result.append(space);
result.append(period);*/
    QString unicode;

     QString nic=ui->textnic->toPlainText();
     QString cNo=ui->textEdit_casi->toPlainText();

  // unicode.reserve(nic.length()+ cNo.length() );

QString result =(unicode.append(nic)+(cNo));

    QMessageBox::information(this,"Code","Unique code is:  "+result ,QMessageBox::Ok);


}

