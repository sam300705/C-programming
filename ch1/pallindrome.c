#include<stdio.h>
int main()
{
int n,rev=0;
printf("eneter the number");
scanf("%d",&n);
int num=n;

while(n!=0)
{
int rem= n%10;
n=n/10;
rev=rev*10+rem;
}
if(num==rev)
printf("palindrome");
else
printf("not pallindrome");
}

