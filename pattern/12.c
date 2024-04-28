#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=4;i++)
{
int a=65;

for(j=1;j<=i;j++)
{
char ch= (char)a;
printf("%c",ch);
a++;
}
printf("\n");
}
}
