#include<stdio.h>
int main()
{
    int s1,s2,s3;

    printf("Enter sides of triangle :");
    scanf("%d %d %d", &s1,&s2,&s3);

    if(s1 == s2 && s2 == s3)
    {
        printf("Traingle is Equilateral");
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("Triangle is Isosceles");
    }
    else{
        printf("Triangle is scalene");
    }

}