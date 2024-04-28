#include<stdio.h>
int main()
{
int a=1,b=2,c=3;
printf("the pythagoras triplet is");

while(c<=30)
{
if(a*a +b*b==c*c)
printf("The following are triplets of pythgaroras :-  %d %d %d\n",a,b,c);
a++;
b++;
c++;
}
}
