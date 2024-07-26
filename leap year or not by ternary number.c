//program to print and check weather the year is leap year or not by ternary number

#include <stdio.h>
void main()
{
 int y,leap;
  printf("enter a year");
  scanf("%d",&y);

  leap=y%400==0?1:0;

  printf("%d",leap);
}
