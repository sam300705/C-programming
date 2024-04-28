#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the sides of the traingle\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1==s2&& s2!=s3 || s2==s3 && s3!=s1 || s1==s3 && s3!=s2 )
        printf("isosceles traingle");
    else if(s1==s2 && s2==s3)
        printf("equalateral traingle");
    else if(s1!=s2 && s1!=s3 && s2!=s3)
        printf("scalence traingle");
    else
        printf("right angle traingle");

}



