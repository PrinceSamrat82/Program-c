#include<stdio.h>
#include<math.h>
int main()
{
 int Rollnum,m1,m2,m3,total;
 float avg;
 printf("Enter Roll Number :");
 scanf("%d",&Rollnum);
 printf("Enter marks for three subjects :");
 scanf("%d %d %d",&m1,&m2,&m3);
 total=m1+m2+m3;
 avg= total/3.0;
 printf("\nTotal is :%d",total);
 printf("\nAverage is :%5.2f",avg);
 if(avg>80)
     printf("\n Grade :A");
 else if((avg>60)&&(avg<=80))
     printf("\n Grade : B");
 else if((avg>40)&&(avg<=60))
     printf("\n Grade : C");
 else if((avg>=33)&&(avg<=40))
        printf("\n Grade : D");
      else
        printf("\n Grade :Fail"); 
  


}