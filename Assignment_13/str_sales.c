#include<stdio.h>

struct admin
{
  int id;
  int salary;
  int insentive; 
  int target; 
};
int main()
{
    struct admin s1;

    printf("Enter id : ");
    scanf("%d",&s1.id);

    printf("Enter salary : ");
    scanf("%s",s1.salary);

    printf("Enter insentive : ");
    scanf("%d",&s1.insentive);

    printf("Enter target : ");
    scanf("%d",&s1.target);

    printf("\ndetails : ");

    printf("\nID is : %d",s1.id);
    printf("\nName is : %s",s1.salary);
    printf("\nSalary is : %d",s1.insentive);
    printf("\nAllowance is : %d",s1.target);
}