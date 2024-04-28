#include<stdio.h>
int main()
{
int n,num,sum=0;
printf("ente rthe nth term");
scanf("%d",&num);

for(int i=0;i<=num;i++)
{
    if(i<=9)
    printf("%d ",i);
else
       n=i;


while(n!=0)
{
int temp=n%10;
sum= sum+temp*temp*temp;
n=n/10;

}
if(sum==i)
printf("%d ",sum);
sum=0;
}
}

