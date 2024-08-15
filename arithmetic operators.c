// program to print all the arithmetic operators.

#include <stdio.h>
int main()
{
 double a,b,result;

 printf("\nEnter the value for a ");
 scanf("%lf",&a);

 printf("\nEnter the value for b ");
 scanf("%lf",&b);

 result=a+b;
 printf("\n %lf+%lf=%lf",a,b,result);

 result=a-b;
 printf("\n %lf-%lf=%lf",a,b,result);

 result=a*b;
 printf("\n %lf*%lf=%lf",a,b,result);

 result=a/b;
 printf("\n %lf/%lf=%lf",a,b,result);

 return 0;
}
