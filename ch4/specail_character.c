#include<stdio.h>

int main() {
    char a;
    printf("Enter the special character: ");
    scanf("%c", &a);

    (a >= 32 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 126) ?
        printf("%c is a special character\n", a) : printf("%c is not a special character\n", a);

    return 0;
}
