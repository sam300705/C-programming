#include<stdio.h>
int main()
{
int i,j;
for( i=2;i<=300;i++)
{
int count=0;
for(j=2;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==1)
printf("%d ",i);
}
}
