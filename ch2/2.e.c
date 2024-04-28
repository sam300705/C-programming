#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;
    float PI = 3.14;

    printf("Enter angle in degree\n");
    scanf("%f",&degree);

    radian = degree * (PI / 180.0);

  float a= sin(radian);
  float b= cos(radian);
  float c=tan(radian);

    printf("Sin(%f) = %f\n", degree, sin(radian));
    printf("Cos(%f) = %f\n", degree, cos(radian));
    printf("Tan(%f) = %f\n", degree, tan(radian));
    printf("Cosec(%f) = %f\n", degree, 1/sin(radian));
    printf("Sec(%f) = %f\n", degree, 1/cos(radian));
    printf("Cot(%f) = %f\n", degree, 1/tan(radian));
}

