//program to print biggest ternary number

#include <stdio.h>
void main()
{
 int a,b,big;

 printf("enter the value for a ");
 scanf("%d",&a );
 printf("enter the value for  b ");
 scanf("%d",&b );

 big=(a>b)?a:b;
 printf("biggest of the given number is %d",big);

}
