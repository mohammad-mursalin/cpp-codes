#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int m[2][2],i,j;

    m[0][0]=1;
    m[0][1]=2;
    m[1][0]=3;
    m[1][1]=4;
   
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    getch();
}