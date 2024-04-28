#include<stdio.h>
int main()
{
int length,breadth,area,perimeter;
printf("enter the lenght,breadth\n");
scanf("%d%d",&length,&breadth);

area= length*breadth;
perimeter = 2*(length+breadth);

if(area> perimeter)
printf("the area is more than perimter");

else
printf("the area is less ");

}
