#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i==j|| i==6-j )

printf("*");

else
printf(" ");
}
printf("\n");
}
}

