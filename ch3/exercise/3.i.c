#include<stdio.h>
int main()
{
int base_year=2001,year,leap=0;

printf("enter the year u wanna search the day of");
scanf("%d",&year);

int difference= year-base_year;



while(base_year<year)
{
if(base_year%100==0)
{
 if(base_year%400==0)
 {
 leap++;
 }
 }
 else
 {
 if(base_year%4==0)
 {
 leap++;
 }
 }
 base_year++;
 }


int total=(difference-leap)*365+leap*366;
int day= total%7;

 if(day==0)
 printf("monday");

 else if(day==1)
 printf("tuesday");

 else if(day==2)
 printf("wednesday");

 else if(day==3)
 printf("thursday");

 else if(day==4)
 printf("friday");

 else if(day==5)
 printf("saturday");

 else if(day==6)
 printf("sunday");

 else
 printf("wrong input");
 }









