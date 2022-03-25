#include<stdio.h>
int main()
{
  int a,b;
  float c;
  char op;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the operator");
scanf("%c",&op);
if(op=='+')
{
  c=a+b;
}
else if(op=='-')
{
  c=a-b;
}
else if(op=='*')
{
  c=a*b;
}
else if(op=='/')
{
  if(b==0)
  {
    printf("Denominator cannot be zero");
    return 1;
  }
  else
  { 
    c=a/b;
  }
}
else if (op=='%')
{
  if (b==0)
  {
  printf("Denominator cannot be zero"); 
  return 1;
  }
  else
  {
    c=a%b;
  }
  }
else
{
   printf("Invalid input"); 
  return 1;
}
 printf("The resultant value is %f",c); 
  return 0;
}

