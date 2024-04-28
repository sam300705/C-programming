
#include<stdio.h>
int main()
{

    int cp,sp,profit,loss;
    printf("enter the cost and selling price\n");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        loss= cp-sp;
        printf("The lost amount is %d",loss);

    }
    else if(sp>cp)
    {

          profit= sp-cp;

        printf("the profit amount is %d",profit);
    }
  else

            printf("there is no loss and weight");


}
