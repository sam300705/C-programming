#include<stdio.h>
 main()
{
int num;
printf("prime number from 1 to 300 are /n");
for(int i=1;i<=300;i++)
{
    i=2;
for(int n=2;n<=300;n++)
{

    if(i==n && i%n==0)
        printf("%d",i);
}
}
}
