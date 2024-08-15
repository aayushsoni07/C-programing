//program to print the simple interest

#include <stdio.h>
int main()
{
 float p,r,t,i,mul,div;



 printf("enter principle p");
 scanf("%f",&p);


 printf("enter principle r");
 scanf("%f",&r);


 printf("enter principle t");
 scanf("%f",&t);

 i=(p*r*t)/100;

 printf("simple interest is %f",i);

 return 0;


}
