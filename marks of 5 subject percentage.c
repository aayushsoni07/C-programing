//program to print 5 subject marks and convert to percentage

#include <stdio.h>
int main()
{
 int a,b,c,d,e,tot,per;

 printf("Enter  subject marks a ");
 scanf("%d",&a);

 printf("Enter  subject marks b ");
 scanf("%d",&b);

 printf("Enter  subject marks c ");
 scanf("%d",&c);

 printf("Enter  subject marks d ");
 scanf("%d",&d);

 printf("Enter  subject marks e ");
 scanf("%d",&e);

 tot=a+b+c+d+e;
 per=(tot*100)/500;

 printf(" tot per of all number %d,",per);

 return 0;
}

