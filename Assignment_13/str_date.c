#include<stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

int main()
{
    struct date d1;

    printf("Enter date : ");
    scanf("%d",&d1.date);

    printf("Enter month : ");
    scanf("%d",&d1.month);

    printf("Enter year : ");
    scanf("%d",&d1.year);

    printf("\nEntered date month and year is :");

    printf("\n %02d/%02d/%04d",d1.date,d1.month,d1.year);
}