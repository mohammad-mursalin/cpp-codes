#include<stdio.h>
int main ()
{
	FILE*student;
	
	char name[40];
	int age,num,i,n;
	
	student= fopen("stu.txt","a");
	
	if(student==NULL)
	{
		printf("File is not created");
	}
	else
	{
		fprintf(student,"\n");
		printf("File is created\n");
		
		printf("Enter the number of students: ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("Name of student: ");
			scanf("%s",&name);
			
			printf("Age of student: ");
			scanf("%d",&age);
			
			printf("Number:");
			scanf("%d",&num);
			
			fprintf(student,"%s\t%d\t%d\n",name,age,num);
		}
		
		
	}
	fclose(student);
	
}
