#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number :");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
      if(b>=c)
      {

          printf("\nDesc :%d\t%d\t%d",a,b,c);
          printf("\nAsc :%d\t%d\t%d",c,b,a);
      }
     else
     {

         printf("\nDesc :%d\t%d\t%d",a,c,b);
         printf("\nAcs :%d\t%d\t%d",b,c,a);

     }

    }
    else if((b>=a)&&(b>=c))
    {
      if(a>=c)
      {
      printf("\nDesc : %d\t%d\t%d",b,a,c);
      printf("\nAsc :%d\t%d\t%d",c,a,b);
      }
    }
    else
    { 
      if(b>=a)
      {
          printf("\nDesc :%d\t%d\t%d",c,b,a);
          printf("\nAsc :%d\t%d\t%d",a,b,c);
      }
      else
      {
          printf("\nDesc :%d\t%d\t%d",c,a,b);
          printf("\nAsc : %d\t%d\t%d",b,a,c);

      }
    }
 return 0;
}