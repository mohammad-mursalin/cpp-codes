#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    ofstream file;

    file.open("mursalin.txt",ios::out|ios::app);

    cout<<"Enter your name : ";
    getline(cin,name);

    file<<"\nAssalamualaikum "<<name<<endl;
    file.close();

}