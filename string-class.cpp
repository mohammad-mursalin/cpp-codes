#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main(){
    string str1="Mursalin";
    string str2=" lamon";
    string str3;

    str3=str2;
    cout<<"str3 is "<<str3<<endl;

    str3=str1+str2;
    cout<<"str3 is "<<str3<<endl;

    int len=str3.size();
    cout << "Length of str3 is "<<len<<endl;

    getch();

}