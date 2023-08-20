#include<iostream>
using namespace std;

class mursalin
{
    public:
        void display()const
        {
            cout << "Constant"<<endl;
        }

        void dis()
        {
            cout << "Not constant";
        }
};
int main()
{
    const mursalin ob1;
    ob1.display();

    mursalin ob2;
    ob2.dis();
}