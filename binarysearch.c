#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp=0,first,last,key,mid;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d no. of elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted list\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted list\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
	printf("Enter the key element:");
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=((first+last)/2);
		if(key==mid[a])
		{
			printf("%d is found at %d",key,mid+1);
			return 1;
		}
		else if(key<mid[a])
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	printf("Key element is not found");
	return 0;
}

