#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    private:
        string name;
    public:
        void setname(string x)
        {
            name=x;
        }

        string getname()
        {
            return name;
        }

};

int main()
{
    student one;
    one.setname("Mursalin");

    cout<<"The name is "<<one.getname();

    getch();

}