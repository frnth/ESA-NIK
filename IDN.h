#ifndef IDN_H
#define IDN_H
#include <string>
#include <regex>
#include <vector>
using namespace std;
enum phone_type
{
    Fax,
    Office,
    Work,
    Home,
    Main
};
class number
{
public :
    void set(string Num, phone_type Type)
    {
        num = Num;
        type = Type;
    }
    string return_num()
    {
        return num;
    }
    int return_type()
    {
        return type;
    }

private:
    string num;
    phone_type type;
};
class user
{
public:
    void set(string Name, string Family, string Email, vector<number> Numbers)
    {
        name = Name;
        family = Family;
        email = Email;
        for (const auto &j : Numbers)
        {
            numbers.push_back(j);
        }
    }
    string return_name()
    {
        return name;
    }
    string return_family()
    {
        return family;
    }
    string return_email()
    {
        return email;
    }
    vector<number> return_numbers()
    {
        return numbers;
    }

private:
    string name;
    string family;
    string email;
    vector<number> numbers;

};

class handle
{
public:
    void Add(user);
    vector<user> Search(string);
    void Delete(int);
    void Delete_all();
    void Show();
    void Import();
    void Save();

private:
    vector<user> phone_book;
};

//vector<int> remove_index;

/*
bool check_num(string Num){
    if(Num[0] != '0'){
        return false;
    }else if(Num.size() != 11){
        return false;
    }else{
        for(const auto &member_of_Num : Num) {
            if(int(member_of_Num) < int('1') || int(member_of_Num) > int("9") )
            {
                return false;
            }
        }
    }
}

bool check_email(const string& Email){
    const regex pattern(R"([a_zA_Z0_9._-] + @[a_zA_Z0_9.-]+\.[a_zA_Z]{2,}");
    return regex_match(email, pattern);
}
*/
#endif // IDN_H
