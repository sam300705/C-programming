#include<stdio.h>

int main() {
    int a, b, power = 1, i = 1;
    printf("Enter the base number and its exponent: ");
    scanf("%d%d", &a, &b);
    while (i <= b) {
        power =power* a;
        i++;
    }
    printf("The power of the number is %d", power);
    return 0;
}
