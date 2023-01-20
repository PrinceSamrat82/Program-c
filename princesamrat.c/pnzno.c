#include<stdio.h>
int main()
{

    int x;
    printf("Enter number :");
    scanf("%d",&x);

    if(x>0)
    printf("Number is positive");
    else if(x<0)
        printf("Number is negative");
    else
    printf("Number is Zero");
    return 0;
}