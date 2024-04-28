#include<stdio.h>
int main()
{
int x,y;
printf("enter the coordinateas of x1,y1\n");
scanf("%d%d",&x,&y);

if(x==0 && y!=0)
printf("point lies in y axis");

else if(x!=0 && y==0)
printf("point lies in x axis");

else if(x!=0 && y!=0)
printf("it neither in x axis nor in y axis and not even at origin");

else
printf("point lies at origin");
}
