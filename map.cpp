#include<map>
#include<string>
#include<iostream>

using namespace std;

map<string,int> phone_book {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthure William Russel", 345678}
};

int get_number(const string& s)
{
    return phone_book["Karl Popper"];
}


int main()
{
    cout << get_number("Karl Popper\n");
    return 0;
}