#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee e1,e2;

    printf("Enter employee ID 1 : ");
    scanf("%d",&e1.id);

    printf("Enter employee Name : ");
    scanf("%s",e1.name);

    printf("Enter employee Salary : ");
    scanf("%d",&e1.salary);

    printf("Enter employee ID 2 : ");
    scanf("%d",&e2.id);

    printf("Enter employee Name : ");
    scanf("%s",e2.name);

    printf("Enter employee Salary : ");
    scanf("%d",&e2.salary);



    printf("\nEmployee details ");
    printf("\nemployee ID is : %d",e1.id);
    printf("\nemployee Nmae is : %s",e1.name);
    printf("\nemployee Salary is : %d\n",e1.salary);


    //second emp


    printf("\nEmployee details ");
    printf("\nemployee ID is : %d",e2.id);
    printf("\nemployee Nmae is : %s",e2.name);
    printf("\nemployee Salary is : %d",e2.salary);
}