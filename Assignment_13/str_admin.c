#include<stdio.h>

struct admin
{
  int id;
  char name[56];
  int salary;
  int allowance;  
};
int main()
{
    struct admin s1;

    printf("Enter id : ");
    scanf("%d",&s1.id);

    printf("Enter name : ");
    scanf("%s",s1.name);

    printf("Enter salary : ");
    scanf("%d",&s1.salary);

    printf("Enter Allowance : ");
    scanf("%d",&s1.allowance);

    printf("\ndetails : ");

    printf("\nID is : %d",s1.id);
    printf("\nName is : %s",s1.name);
    printf("\nSalary is : %d",s1.salary);
    printf("\nAllowance is : %d",s1.allowance);
}