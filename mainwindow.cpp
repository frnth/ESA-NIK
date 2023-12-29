#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "IDN.h"
#include <vector>
#include <string>


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
    UpdateNumText();

}

void MainWindow::UpdateNumText() {
    QString text;

    for (const auto &numberL : shomares) {
        QString element = QString::fromStdString(numberL.return_num()) + " (" + /*QString::fromStdString(phoneTypeToString((int)numberL.return_type()))*/ "DEFULT"+ ")" + "\n";
        text.append(element);
    }

    ui->textEdit->setText(text);
}















