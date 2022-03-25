#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("The number of digits is %d\n",count);
	return 0;
}
