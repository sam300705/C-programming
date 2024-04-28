#include<stdio.h>
int main()
{
int s1,s2,s3,sum=0,largest_side;
printf("ente rthe sides of the triangle\n");
scanf("%d%d%d",&s1,&s2,&s3);

if(s1>s2 && s1>s3)
{
sum=s2+s3 ;
largest_side = s1;
}

else if(s2>s1 && s2>s3)
{


sum= s1+s3;
largest_side =s2;
}

else if(s3>s1 && s3>s2)
{


sum= s1+s2;
largest_side =s3;
}


if(sum>largest_side)
printf("the traingle is possible\n AND THE LARGEST SIDE IS %d",largest_side);

else
printf("the traingle is not possible\n");
}
