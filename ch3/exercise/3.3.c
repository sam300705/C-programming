/*So every fourth year we add an extra day (the 29th of February), which makes 365.25 days a year. This is fairly close but is wrong by about 1 day every 100 years.

So every 100 years we don't have a leap year, and that gets us 365.24 days per year (1 day less in 100 years = -0.01 days per year). Closer, but still not accurate enough!

So another rule says that every 400 years is a leap year again, this gets us 365.2425 days per year (that is 1 day regained every 400 years equals 0.0025 days per year), which is close to 365.242375 not to matter much.*/
#include<stdio.h>
int main()
{

int year;
printf("ENTER THE YEAR");
scanf("%d",&year);
if(year%4==0)
{
    if(year%100==0)
    {
        if(year%400==0)
        {

            printf("it is a leap year");
        }
    }
}
else
    printf("it is not a leap year");
}
