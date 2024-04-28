#include<stdio.h>
#include<math.h>

int main() {
    int num;
    for (num = 1; num <= 500; num++) {
        int n = num;
        int sum = 0;
        while (n > 0) {
            int rem = n % 10;
            sum += pow(rem, 3);
            n /= 10;
        }
        if (num == sum) {
            printf("%d\n", num);
        }
    }

}
