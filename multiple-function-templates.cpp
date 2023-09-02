#include<iostream>
#include<conio.h>
using namespace std;

template < class temp1,class temp2 >
temp1 add(temp1 a,temp2 b)
{
    return a+b;
}
int main()
{
    cout<<add(4.6,6)<<endl;
    
    getch();
}