//program to print and swap 2 objects

#include <stdio.h>
void main()
{
 int apple,orange,c;


 printf("Enter the value of apple  ");
 scanf("%d",&apple);

 printf("Enter the value of orange ");
 scanf("%d",&orange);

 c=apple;
 apple=orange;
 orange=c;

 printf("The swapped number are %d,%d",apple,orange);

 return 0;

}
