#include<stdio.h>
int main()
{
 int p,n;
 float r,si;
 printf("Enter the value of n,p,r\n");
 scanf("%d\n%d\n%f",&p,&n,&r);
 si=p*n*r/100;
 printf("%f",si);
 return 0;

}