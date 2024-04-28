#include<stdio.h>
int main()
{
int i,j,m;
printf("enter the no. of rows");
scanf("%d",&m);
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}

