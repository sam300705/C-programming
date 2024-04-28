#include<stdio.h>
int main()
{
int rate=120;
float overpay;
int hour,i=1;
while(i<=10)
{
printf("enter the no. of hours worked\n");
scanf("%d",&hour);
if(hour>=40)
{
overpay= (hour-40)*rate;
}
else
overpay=0;
printf("the payout for employee number %d id %f\n",i,overpay);
i++;
}
}
