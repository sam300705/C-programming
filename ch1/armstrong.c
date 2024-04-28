#include<stdio.h>
#include<math.h>
int main()
{
int n,num,temp,sum=0;
printf("enter the number");
scanf("%d",&n);
num=n;

while(n!=0)
{
temp=n%10;
n=n/10;
sum= sum+temp*temp*temp;

}
if(sum==num)
printf("armstrong number");
else
printf("not a armstrong number");
}
