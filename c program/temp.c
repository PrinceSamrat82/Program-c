#include<stdio.h>

int main()
{
    int a[10],b[10],i;

    printf("enter 1st array\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter 2nd array\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("sum of two array is: \n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",a[i]+b[i]);
    }

    return 0;  
}
