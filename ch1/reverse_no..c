#include<stdio.h>
int main()
{
int n,rev=0;
printf("ente rthe number to reverase");
scanf("%d",&n);

while(n!=0)
{
int rem=n%10;
n=n/10;
rev= rev*10+rem;

}
printf("the reverse nukmber is %d",rev);
}
