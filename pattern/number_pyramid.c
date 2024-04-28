#include<stdio.h>
int main()
{
int i,j,k,a=1;;
for(i=1;i<=4;i++)
{
a=1;
for(j=1;j<=4-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%d",a);
a++;
}
printf("\n");

}
}
