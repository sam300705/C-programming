#include<stdio.h>

int main() {
    int a1, a2, a3, greatest;
    printf("Enter the three numbers: ");
    scanf("%d%d%d", &a1, &a2, &a3);

    greatest = (a1 > a2 && a1 > a3) ? a1 : ((a2 > a3) ? a2 : a3);

    printf("The greatest number is %d\n", greatest);

    return 0;
}
