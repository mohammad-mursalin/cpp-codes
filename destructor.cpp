#include<iostream>
using namespace std;

class mursalin
{
    public:
        ~mursalin()
        {
            cout<<"I'm the distructor"<<endl;
        }

        void display()
        {
            cout<<"I'm the display"<<endl;
        }
};

int main()
{
    mursalin ob;
    ob.display();
}