#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
for(j=1;j<=4-i;j++)
{
printf(" ");
}
for(k=1;k<=4;k++)
{
printf("*");
}
printf("\n");
}
}
