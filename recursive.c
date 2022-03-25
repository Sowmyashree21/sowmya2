#include<stdio.h>
int btod(int);
int main()
{ 
	int bin,dec;
	printf("Enter a binary number:");
	scanf("%d",&bin);
	dec=btod(bin);
	printf("The decimal value of the binary value %d is %d\n",bin,dec);
}
int btod(int bin)
{
	if(bin==0)
	{ 	
		return 0;
	}
	else
	{
		return bin%10+btod(bin/10)*2;
	}
}
	
