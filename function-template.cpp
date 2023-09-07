#include<iostream>
#include<conio.h>
using namespace std;

template < class Temp >
Temp add(Temp a,Temp b)
{
    return a+b;
}
int main()
{
    cout<<add(4,6)<<endl;
    cout<<add(4.6,6.2)<<endl;
    
    getch();
}