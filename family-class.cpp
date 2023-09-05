#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    private:
        int id=101;
        string name="Mursalin lamon";
    public:
        friend class B;
};
class B
{
    public:
        void display(A ob)
        {
            cout<<"ID number is "<<ob.id<<endl<<"The name is "<<ob.name<<endl;
        }
};
int main()
{
    A ob1;
    
    B ob2;
    ob2.display(ob1);

    getch();
}