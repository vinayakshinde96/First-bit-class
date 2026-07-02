#include<stdio.h>

struct product
{
    int id;
    char name[90];
    char quality[90];
    int price;
};

int main()
{
    struct product p1;

    printf("Enter product id : ");
    scanf("%d",&p1.id);

    printf("Enter product name : ");
    scanf("%s",p1.name);

    printf("Enter product quality : ");
    scanf("%s",p1.quality);

    printf("Enter product price : ");
    scanf("%d",&p1.price);

    printf("\nProduct details ");

    printf("\n product ID is : %d",p1.id);
    printf("\n product Name is : %s",p1.name);
    printf("\n product Quality is : %s",p1.quality);
    printf("\n product Price is : %d",p1.price);
}
