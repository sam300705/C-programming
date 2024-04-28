#include<stdio.h>
int main()
{
int x,y,x1,y1,radius;
printf("enter the cordinates of x1,y1 x2,y2");
scanf("%d%d%d%d",&x,&y,&x1,&y1);

printf("enter the radius");
scanf("%d",&radius);

/*finding distance between the coordinates and the point that will be taken and the compare whether it is more than radius or not*/
float D= sqrt(pow(x1-x,2)+pow(y1-y,2));
if(D>radius)
printf("the point is outside circle");

else if(D<radius)
printf("the point is inside the circle");

else
printf("the point is on the circle");
}

