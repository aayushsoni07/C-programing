//program to print biggest of 4 number

#include <stdio.h>
void main()
{
 int a,b,c,d,big;

 printf("enter the value for a ");
 scanf("%d",&a);
 printf("enter the value for b ");
 scanf("%d",&b);
 printf("enter the value for c ");
 scanf("%d",&c);
 printf("enter the value for d ");
 scanf("%d",&d);

 big=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
 printf("biggest of the given 4 number is %d",big);
}
