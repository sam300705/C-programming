#include<stdio.h>
int main()
{
int i,j,k,a=65;
for(i=1;i<=4;i++)
{
a=65;
for(j=1;j<=4-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
char ch=(char)a;
printf("%c",ch);
a++;
}
printf("\n");


}
}
