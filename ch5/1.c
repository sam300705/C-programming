#include <stdio.h>

int main() {
    char ch = 0;
    while (1) {
        printf("%d - %c\n", ch, ch);
        if (ch == 255)
            break;
        ch++;
    }
    return 0;
}
