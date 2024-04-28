#include <stdio.h>
#include <math.h>

int main() {
    int angle;
    printf("Enter the angle in degrees: ");
    scanf("%d", &angle);

    float radian = angle * M_PI / 180.0;
    float sin_radian = sin(radian);
    float cos_radian = cos(radian);

    float sin_squared = sin_radian * sin_radian;
    float cos_squared = cos_radian * cos_radian;

    float sum = sin_squared + cos_squared;

    if (sum == 1.0) {
        printf("Yes, the sum of the squares of sine and cosine equals 1.\n");
    } else {
        printf("No, the sum of the squares of sine and cosine does not equal 1.\n");
    }

    return 0;
}
