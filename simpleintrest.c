#include<stdio.h>
int main()
{
  float interest,p,r,n;
  printf("Enter value of P:");
  scanf("%f",&p);
  printf("Enter value of R:");
  scanf("%f",&r);
  printf("Enter value of N:");
  scanf("%f",&n);
  interest=p*r*n/100;
  printf("Simple interest :%f",interest);
  return 0;




}