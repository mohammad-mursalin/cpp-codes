#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
        string name;
        int age;

        void display1()
        {
            cout<<"The name is "<<name<<endl<<"Age= "<<age<<endl;
        }
};

class student : public person
{
    public:
        int id;

        void display2()
        {
            cout << "Id is "<<id<<endl;
            display1();
        }
};

int main()
{
    student s1;
    s1.name="Mursalin";
    s1.age=23;
    s1.id=101;
    s1.display2();
    
    getch();
}