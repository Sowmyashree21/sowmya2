#include<stdio.h>
int main()
{
	int n,i,avg;
	struct student
	{
		int rollno,eng,mat,science,social,lang,lang2;
		char name[20];
		float avg;
	};
	struct student s[20];
	printf("Enter the number of students:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter student %d details\n",i+1);
		printf("Enter the roll number:\n");
		scanf("%d",&s[i].rollno);
		printf("Enter the name of the student:\n");
		scanf("%s",s[i].name);
		printf("Enter the marks of eng,mat,science,social,lang,lang2\n");
		scanf("%d%d%d%d%d%d",&s[i].eng,&s[i].mat,&s[i].science,&s[i].social,&s[i].lang,&s[i].lang2);
	}
	for (i=0;i<n;i++)
	{
		s[i].avg=(s[i].eng+s[i].mat+s[i].science+s[i].social+s[i].lang+s[i].lang2)/6;
	}
	printf("Enter the average marks:");
	scanf("%d",&avg);
	for (i=0;i<n;i++)
	{
		if (s[i].avg>avg)
		{ 
			printf("%s got above average\n",s[i].name);
		}
		else
		{ 
			printf("%s got below average\n",s[i].name);
		}
 	}
	return 0;
}
