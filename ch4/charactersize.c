#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
printf("it is a Uppercase character %c",ch);
else if(ch>=97 && ch<=122)

printf("it is a smaller case alphabet");
else
printf("it is a number or special character");

}
