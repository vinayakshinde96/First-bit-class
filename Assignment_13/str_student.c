#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int marks;
};

int main()
{
    struct student s1;

    printf("Enter student roll No : ");
    scanf("%d",&s1.roll_no);

    printf("Enter student Name : ");
    scanf("%s",s1.name);

    printf("Enter student marks : ");
    scanf("%d",&s1.marks);

    printf("\nStudent details : ");

    printf("\nStudent Roll_no is : %d",s1.roll_no);
    printf("\nStudent Name is : %s",s1.name);
    printf("\nStudent marks is : %d",s1.marks);
}
