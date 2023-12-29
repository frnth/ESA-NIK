#include "mainwindow.h"
#include "IDN.h"
#include <vector>
#include <QApplication>
#include <iostream>
#include <qdebug.h>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}




void handle::Add(user karbar)
{
    phone_book.push_back(karbar);
}

vector<user> handle::Search(string search_word)
{
    vector<user> result;
    int count = 0, index = 0;
    for(auto &contact : phone_book){
        if(contact.return_name() == search_word || contact.return_family() == search_word){
            result.push_back(contact);
            remove_index[index] = count;
            index++;
        }else{
            for(auto &Num : contact.return_numbers())
            {
                if(Num.return_num() == search_word){
                    result.push_back(contact);
                    remove_index[index] = count;
                    index++;
                }
            }
        }
    count++;
}
return result;
}

void handle::Delete(int index){

    phone_book.erase(phone_book.begin() + index);
}

void handle::Delete_all(){
    phone_book.clear();
}


