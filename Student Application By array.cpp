#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter the number of students : ";
    cin>>n;

    int student[n],sum=0;

    for(i=0;i<n;i++)
    {
        cout<<"Marks of student "<<i+1<<": ";
        cin>>student[i];
        sum=sum+student[i];
    }

    cout<<"Total number= "<<sum<<endl;

    float avg=(float)sum/n;

    cout<<"Average number is "<<avg<<endl;

    int max=student[0];
    int min=student[0];

    for(i=1;i<n;i++)
    {
        if(max<student[i])
        max=student[i];
        if(min>student[i])
        min=student[i];
    }

    cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;

    getch();

}