//program to print the smallest of the 4 ternary number

#include <stdio.h>
void main()
{
 int a,b,c,d,small;

 printf("enter the value for a ");
 scanf("%d",&a);
 printf("enter the value for b ");
 scanf("%d",&b);
 printf("enter the value for c ");
 scanf("%d",&c);
 printf("enter the value for d ");
 scanf("%d",&d);

 small=(a<b)?(a<c)?(a<d)?a:d:(c<d)?c:d:(b<c)?(b<d)?b:d:(c<d)?c:d;
 printf("smallest of the given 4 number is %d",small);
}
