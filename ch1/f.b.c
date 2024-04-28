#include <stdio.h>

int main() {
    float length, breadth, area, perimeter, radius;

    printf("Enter the length and breadth of your rectangle ");
    scanf("%f%f", &length,&breadth);


    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of your rectangle is: %f\n", area);
    printf("The perimeter of your rectangle is: %f\n", perimeter);

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);

    float circleArea = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;

    printf("The area of your circle is: %f\n", circleArea);
    printf("The circumference of your circle is: %f\n", circumference);

    return 0;
}
