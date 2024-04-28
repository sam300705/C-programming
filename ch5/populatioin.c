#include<stdio.h>

int main() {

    float total = 100000; // Current population is 1 lakh

    printf("Population for the last 10 years:\n");
    for(int i=1;i<=10;i++)
    {

         total=total-0.10*total;
        printf("the population index  for %d year is  %d year\n",i,(int)total);

    }
}
