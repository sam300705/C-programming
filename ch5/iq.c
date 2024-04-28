#include<stdio.h>

int main()
{


int y,i;
float x=5.5;
for(y=1;y<=6;y++)
{

i=2+(y+0.5*x);
printf("%d | %0.2f | %d\n",y,x,i);
x=x+0.5;
}
}

