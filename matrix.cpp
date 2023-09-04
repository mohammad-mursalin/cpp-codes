#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row,col;

    cout<<"Enter the number of rows and column of the matrix : ";
    cin>>row>>col;

    int m[row][col];

    int i,j;
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Value of "<<"row "<<i+1<<" column "<<j+1<<"=";
            cin>>m[i][j];
        }
        cout<<endl;
    }

    cout<<"m["<<row<<"]["<<col<<"]=";

    for(i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl<< "        " ;
        
    }

    getch();
}