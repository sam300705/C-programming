#include<stdio.h>
int main()
{
    int number, sum=0, i, n, count=0, num;
    printf("enter a number ");
    scanf("%d", &number);
    num = number;
    while(num!=0)
    {
        num = num/10;
        count++;
    }
    for(i=0;i<count;i++)
    {
        n = number % 10;
        number = number / 10;
        sum = sum + n;
    }

    printf("sum is = %d", sum);


}
