#include<stdio.h>

int main() {
    float hard, carbon, strength;
    printf("Enter the details of the steel: hardness, carbon content, tensile strength: ");
    scanf("%f%f%f", &hard, &carbon, &strength);

    int grade;

    if (hard > 50 && carbon < 0.7 && strength > 5600) {
        grade = 10;
    } else if (hard > 500 && carbon < 0.7 && strength <= 5600) {
        grade = 9;
    } else if (hard <= 500 && carbon < 0.7 && strength > 5600) {
        grade = 8;
    } else if (hard > 500 && carbon >= 0.7 && strength > 5600) {
        grade = 7;
    } else if (hard > 500 || carbon < 0.7 || strength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }

    printf("The quality grade of the steel is %d\n", grade);

    return 0;
}
