#include <stdio.h>

int main() {
    float red, green, blue;
    float cyan, magenta, yellow, black;
    float white, max;

    printf("Enter the value of red, green, blue in the range of 0-255: ");
    scanf("%f%f%f", &red, &green, &blue);

    if (red != 0 && green != 0 && blue != 0) {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        if (red > green && red > blue)
            max = red;
        else if (green > red && green > blue)
            max = green;
        else
            max = blue;

        white = max;

        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;

        printf("The value of cyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f\n", cyan, magenta, yellow, black);
    } else {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;

        printf("The value of cyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f\n", cyan, magenta, yellow, black);
    }


}
