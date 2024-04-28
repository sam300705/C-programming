#include<stdio.h>
int main()
{

    int n,abs;
    printf("ente rthe number");
    scanf("%d",&n);
    if(n<0)
    {


         abs= n*(-1);
        printf("The absolute number is %d",abs);
    }

    else
        printf("the absolute number is %d",n);
}
