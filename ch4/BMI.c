#include<stdio.h>

int main() {
    float weight, height, BMI;
    printf("Enter the weight in kg and the height in m: ");
    scanf("%f%f", &weight, &height);

    BMI = weight / (height * height);

    if (BMI < 15)
        printf("Starvation\n");
    else if (BMI >= 15.1 && BMI <= 17.5)
        printf("Anorexic\n");
    else if (BMI >= 17.6 && BMI <= 18.5)
        printf("Underweight\n");
    else if (BMI >= 18.6 && BMI <= 24.9)
        printf("Ideal\n");
    else if (BMI >= 25 && BMI <= 25.9)
        printf("Overweight\n");
    else if (BMI >= 30 && BMI <= 30.9)
        printf("Obese\n");
    else
        printf("Morbidly Obese\n");


}
