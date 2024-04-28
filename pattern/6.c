#include<stdio.h>
int main()
{
int i,j;
for( i=1;i<=4;i++)
{
for(j=1;j<=i;j=j+2)
{
printf("%d",j);
}
printf("\n");
j=1;
}
}
