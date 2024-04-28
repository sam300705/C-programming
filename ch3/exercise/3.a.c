#include<stdio.h>
int main()
{
int n,rev=0;
printf("enter the five digit number");
scanf("%d",&n);
int temp=n;
while(n!=0)
{
int rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(temp==rev)
{
printf("the number is same");
}
else
printf("the number is not same when reversed");
}
