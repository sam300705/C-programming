#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float s=0, area=0;
    printf("enter the lenght of AC ");
    scanf("%d", &a);
    printf("enter the length of BC: ");
    scanf("%d", &b);
    printf("enter length of CA: ");
    scanf("%d", &c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is: %f", area);
    }
