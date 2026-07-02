#include<stdio.h>

struct complex 
{
    int real;
    int imagenary;
};

int main()
{
    struct complex c1;

    printf("Enter real : ");
    scanf("%d",&c1.real);

    printf("Enter imagenary : ");
    scanf("%d",&c1.imagenary);

    printf("\nEntered details is : ");

    printf("real is : %d",c1.real);
    printf("imagenary is : %d",c1.imagenary);
}
