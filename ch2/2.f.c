#include<stdio.h>
 int main()
{
int a,b;
printf("enter the number to swap");
scanf("%d%d",&a,&b);
printf("number before swaping a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n number after swaping a=%d b=%d",a,b);
return 0;
}
