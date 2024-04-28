#include<stdio.h>
main()
{
float n,factorial=1;
float sum=0;
for(int i=1;i<=7;i++)
{
factorial=1;
for(int j=1;j<=i;j++)
{
factorial=factorial*j;
}
sum=sum+i/factorial;
}
printf("the sum is %f",sum);
}

