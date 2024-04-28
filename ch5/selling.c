#include<math.h>
#include<stdio.h>
int main()
{

    int sp,cp,profit;
    printf("enter the cp and sp\n");
    scanf("%d%d",&cp,&sp);

    if(cp>sp)
    {
    int loss= cp-sp;
    printf("the loss is %d",loss);}

    else if(sp>cp)
    {


    profit = sp-cp;
    printf("THe profit is %d",profit);
    }

    else
    printf("NO PROFIT NO LOSS");
    }

