#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n;
    while (n > 1) {
        factorial= factorial* n;
        n--;
    }
    printf("The factorial of the number %d is %d", num, factorial);
    return 0;
}
