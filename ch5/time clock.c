#include<stdio.h>
int main()
{
    int n,i=1;
    printf("The time ");

    for(i=1;i<=24;i++)
    {
        if(i >= 1 && i < 12)
            printf("%d AM\n",i);
        else if(i == 12)
            printf("12 Noon\n");
        else if(i > 12 && i < 24)
            printf("%d PM\n", i - 12);
        else
            printf("24 Midnight\n");
    }

    return 0;
}
