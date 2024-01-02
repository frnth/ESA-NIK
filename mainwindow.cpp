/*#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "IDN.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Add_Done_pb_clicked()
{
    QString name, family, email;
    name = ui -> box_add_name -> text();
    family = ui -> box_add_family -> text();
    email = ui -> box_add_email -> text();
    user h_user;
    h_user.set(name.toStdString(), family.toStdString(), email.toStdString(), shomares);
    note_book.Add(h_user);
    shomares.clear();
}





void MainWindow::on_Clear_all_pb_clicked()
{
    note_book.Delete_all();
}





void MainWindow::on_add_this_number_pb_clicked()
{
    QString nuMber = ui -> box_phone_number -> text();
    int type_index = ui -> comboBox_type -> currentIndex();
    number h_number;
    phone_type type = static_cast<phone_type> (type_index);
    h_number.set(nuMber.toStdString(), type);
    shomares.push_back(h_number);

}


void MainWindow::on_alaki_clicked()
{
    //QString x = ui -> box_add_name -> text();

    ui->textEdit_display->setText("hellp");
    //ui->textEdit_display->show();
}

*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

/*MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}*/
/*
void MainWindow::on_alaki_clicked()
{
    //QString x = ui -> box_add_name -> text();

    ui->textEdit_display->setText("hellp");
    //ui->textEdit_display->show();
}
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Clear_all_pb, &QPushButton::clicked, ui->textEdit_display, &QTextEdit::clear);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_this_number_pb_clicked()
{
    /*QString name, family, email;
    name = ui -> box_add_name -> text();
    family = ui -> box_add_family -> text();
    email = ui -> box_add_email -> text();
    user h_user;
    h_user.set(name.toStdString(), family.toStdString(), email.toStdString(), shomares);
    note_book.Add(h_user);
    shomares.clear();*/

    //ui->textEdit_display->append(ui -> box_phone_number -> text());
    int a = ui -> comboBox_type -> currentIndex();
    QString mystring;
    if(a == 0){
       mystring = QString ("Fax");
    }else if(a == 1){
        mystring =  QString ("Office");
    }else if(a == 2){
        mystring = QString("Work");
    }else if(a == 3){
        mystring = QString("Home");
    }else if(a == 4){
        mystring = QString("Main");
    }

    ui->textEdit_display->append("phone : " + ui -> box_phone_number -> text() + " (type : " + mystring + ")");
}

void MainWindow::on_add_Done_pb_clicked()
{
    ui->textEdit_display->append(ui -> box_add_name -> text());
    ui->textEdit_display->append(ui -> box_add_family -> text());
    ui->textEdit_display->append(ui -> box_add_email -> text());
    MainWindow::on_add_this_number_pb_clicked();
}



