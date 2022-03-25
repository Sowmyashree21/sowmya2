#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],ch;
	int i,sum=0;
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Enter the character:\n");
	scanf(" %c",&ch);
	while(s[i]!='\0')
	{
		if(s[i]==ch)
		{
			sum=sum+1;
		}
		i++;
	}
	if(sum>=1)
	{
		printf("The element %c has occured %d times\n",ch,sum);
	}
	else
	{
		printf("The element %c is not present in the string %s\n",ch,s);
	}
	return 0;
}
	
