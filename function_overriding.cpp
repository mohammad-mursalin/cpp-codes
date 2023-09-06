#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
        void display()
        {
            cout<<"I'm a person"<<endl;
        }
};

class student : public person
{
    public:
        void display()
        {
            cout<<"I'm a student"<<endl;
        }
};

class teacher : public person
{
    public:
        void display()
        {
            cout<<"I'm a teacher"<<endl;
        }
};

int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();

    getch();
}