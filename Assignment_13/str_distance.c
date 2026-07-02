#include<stdio.h>

struct distance
{
    int feet;
    int inch;
};
int main()
{
    struct distance d1;

    printf("Enter feet : ");
    scanf("%d",&d1.feet);

    printf("Enter inch : ");
    scanf("%d",&d1.inch);

    printf("\nDetails are : ");

    printf("\nfeet is : %d",d1.feet);
    printf("\ninch is : %d",d1.inch);
}