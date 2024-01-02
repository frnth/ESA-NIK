/*#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include "IDN.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Add_Done_pb_clicked();

    void on_Clear_all_pb_clicked();

    void on_add_this_number_pb_clicked();

    void on_alaki_clicked();

    void on_label_linkActivated(const QString &link);

private:
    vector<number> shomares;
    handle note_book;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "IDN.h"
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_add_Done_pb_clicked();

    void on_add_this_number_pb_clicked();

    void on_Exit_pb_clicked();

private:
    void updateScreen();
    handle note_book;
    vector<number> shomares;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

