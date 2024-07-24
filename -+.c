#include <stdio.h>
void main()
{
    int a,b;
    printf("enter a number a ");
    scanf("%d",&a);
    printf("enter a number b ");
    scanf("%d",&b);

 int big=(a<b)?b:a;

printf("big = %d",&big);

}
