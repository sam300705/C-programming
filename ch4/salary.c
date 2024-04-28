#include<stdio.h>

int main() {
    char G;
    int yos, qual, salary;

    printf("Enter the Gender (M/F), years of service, and qualification (for postgraduate=1 and graduate=0): ");
    scanf(" %c%d%d", &G, &yos, &qual);

    if (G == 'M' && yos >= 10 && qual == 1)
        salary = 11000;
    else if ((G == 'M' && yos >= 10 && qual == 0) || (G == 'M' && yos < 10 && qual == 1))
        salary = 10000;
    else if (G == 'M' && yos < 10 && qual == 0)
        salary = 7000;
    else if (G == 'F' && yos >= 10 && qual == 1)
        salary = 12000;
    else if (G == 'F' && yos >= 10 && qual == 0)
        salary = 9000;
    else if (G == 'F' && yos < 10 && qual == 1)
        salary = 10000;
    else // (G == 'F' && yos < 10 && qual == 0)
        salary = 6000;

    printf("THE SALARY IS %d", salary);


}
