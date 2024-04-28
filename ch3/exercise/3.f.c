#include<stdio.h>
#include<math.h>
int main()
{
int x1,x2,x3,y1,y2,y3;

printf("enter the value of (x1,y1),(x2,y2),(x3,y3)\n");
scanf("%d %d\n%d%d\n%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
if((y2-y1)/(x2-x1)==(y3-y1)/(x3-x1))



printf("the points lie in a st. line");
else

printf("all points dont lie in a st. line");
}

