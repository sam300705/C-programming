
#include<stdio.h>
#include<math.h>
int main()
{
float sum=0,x;

printf("For the following equation, please put the value of x");
scanf("%f",&x);
sum=sum+(x-1)/x;
for(int i=2;i<=7;i++)
{
sum= sum+0.5* pow(x-1/x,i);
}
printf("The sum of the series is %0.2f when the value of x is put as %f",sum,x);
}
