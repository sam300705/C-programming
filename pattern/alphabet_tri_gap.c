#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=4;i++)
{
int a=65;
for(j=1;j<=4-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
char ch= (char)a;
printf("%c",ch);
a++;
}
printf("\n");

}
}
