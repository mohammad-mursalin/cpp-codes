#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
    char name1[]="mursalin";
    char name2[]=" LAMON";
    char name3[20];

    strcpy(name3,name2);
    cout<<name3<<endl;
    
    strcat(name1,name2);
    cout<<name1<<endl;

    int len=strlen(name1);
    cout<<"Length of name1 is "<<len<<endl;

    strupr(name1);
    cout<<name1<<endl;

    strlwr(name2);
    cout<<name2<<endl;

    int i=strcmp(name1,name2);
    if(i==0)
    cout<<"They are same"<<endl;
    else
    cout<<"They are not the same"<<endl;

    getch();
}