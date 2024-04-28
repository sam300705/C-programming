#include<stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    year % 100 == 0 && year % 400 == 0 || year % 4 == 0 ?
        printf("It is a leap year: %d\n", year) : printf("It is not a leap year\n");

    return 0;
}
