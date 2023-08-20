#include<iostream>
#include<conio.h>
using namespace std;

class mobileuser
{
    public:
        virtual void message()=0;
};

class mursalin: public mobileuser
{
    public:
        void message()
        {
            cout<<"Assalamualaikum I'm mursalin";
        }
};

int main()
{
    mobileuser *m;

    mursalin l;
    m=&l;
    m->message();

    getch();
}