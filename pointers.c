#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float *p,mean,num=0,var=0,sum=0,sd=0,a[20];
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%f",p);
		p++;
	}
	printf("Array elements are:\n");
	p=a;
	for(i=0;i<n;i++)
	{
		printf(" %f\n",*p);
		p++;
	}
	p=a;
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++;
	}
	mean=sum/n;
	printf("Sum=%f\n",sum);
	printf("Mean=%f\n",mean);
	p=a;
	for(i=0;i<n;i++)
	{
		var=var+pow((*p-mean),2);
		p++;
	}
	var=var/n;
	printf("Variance=%f\n",var);
	sd=sqrt(var);
	printf("Standard deviation=%f\n",sd);
	return 0;
}
