#include<stdio.h>
int main()
{
 int a,b,temp;
 printf("Enter 1st number :");
 scanf("%d",&a);
 printf("Enter 2nd number :");
 scanf("%d",&b);
 printf("\nBefore Swapping ...");
 printf("\n----------------------------");
 printf("\nA=%d,B=%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\nAfter Swapping ...");
 printf("\n--------------------------------");
 printf("\nA=%d,B=%d",a,b);
 return 0;
 


}