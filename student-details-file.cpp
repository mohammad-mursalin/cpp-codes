#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    int age;
    string name;

    ofstream file;
    file.open("student_details.txt",ios::out|ios::app);

    for(int i=1;i<4;i++)
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        file<<name<<"\t";
        cout<<"Enter your age : ";
        cin>>age;
        file<<age<<"\n";
        cin.ignore();
    }

    file.close();
}