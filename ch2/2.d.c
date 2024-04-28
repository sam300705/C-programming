#include<stdio.h>
#include<math.h>
int main()
{
    float temp, wind, wcf;
    printf("Enter air temperature ");
    scanf("%f", &temp);

    printf("Enter the wind speed  ");
    scanf("%f", &wind);

    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(wind,0.16);

    printf("Wind Chill Factor is %f",wcf);


}
