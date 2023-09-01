#include<iostream>
#include<conio.h>
using namespace std;

class mursalin
{
    public:
        void display()
        {
            cout<<"I'm the display function";
        }
};
int main()
{
    mursalin ob;
    mursalin *p=&ob;
    p->display();
    getch();
}