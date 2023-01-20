#include<stdio.h>
int main()
{
 int arr[5];
 int i;
 printf("Enter the elements of array\n");
 for(i=0;i<4;i++)
 {
     scanf("%d",&arr[i]);

 }
printf("Elements of the array\n");
for(i=0;i<4;i++)
{
    printf("%d\t",arr[i]);
}
return 0;
}