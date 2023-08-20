#include<iostream>
using namespace std;

class student
{
    public:
        const int admissionfee;
        const int examfee;
        int id;

        student(int x,int y,int z)
        : admissionfee(x),examfee(y)
        {
            id=z;
            cout<<"Admission fee is "<<x<<endl;
            cout<<"Exam fee is "<<y<<endl;
            cout<<"Student id is "<<z<<endl;

        }
};

int main()
{
    student mursalin(1000,500,101);

}