#include<stdio.h>
#include<math.h>
int main()
{
float  a,b,c,desc,r1,r2,real,imag;
printf("Enter the value of a,b and c");
scanf("%f%f%f",&a,&b,&c);      
if(a==0)
{
printf("It is a linear equation\n");
return 1;
}
desc=b*b -4*a*c;
if(desc==0)
{
printf("\nRoots are real and equal");
r1=-b/(2*a);
r2=r1;
printf("\nRoots r1= %f and r2= %f",r1,r2);
}
else if(desc>0)
{
printf("\nRoots are real and distinct");
r1=-b+sqrt(desc)/(2*a);
r2=-b-sqrt(desc)/(2*a); 
printf("\nRoots r1= %f and r2= %f",r1,r2);
}
else
{
printf("\nRoots are imaginary");
real=-b/(2*a);
imag=sqrt(-desc)/(2*a);
printf("\nRoots r1=%f +i%f",real,imag);
printf("\nr2=%f-i%f",real,imag);
}
return 0;
}

