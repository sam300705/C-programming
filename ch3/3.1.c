#include<stdio.h>
int main()
{
int quantity,rate,discount;
printf("enter the quantity and the rate of the goods");
scanf("%d%d",&quantity,&rate);
if(quantity>1000)
 discount=10;
else
 discount =0;
int total= quantity*rate-quantity*rate*discount/100;
printf("%d",total);
 printf("\ndiscount is =%d",discount);
 }
