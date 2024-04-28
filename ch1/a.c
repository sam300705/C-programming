#include <stdio.h>

int main() {
    int i, j;

    // Upper part of the rose
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 4 - i; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the rose
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2 * (5 - i); j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 7 + 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 7 - 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 7 + 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 7 - 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        for (j = 0; j < 7 + 2 * i; j++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}
