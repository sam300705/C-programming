#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
if(i%2==0)
{


int a=65;
for(j=1;j<=i;j++)
{
char ch=(char)a;

printf("%c",ch);
a++;
}
}
else
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
