#include<stdio.h>

void age_person(int age)
{
    
    if(age < 12){
        printf("chile");
    }
    else if(age >= 12 && age <= 19){
        printf("Teenager");
    }
    else if(age >= 20 && age <= 59){
        printf("Adult");
    }
    else if (age >= 60){
        printf("Senior");
    }
    else{
        printf("Invalid age ");
    }
}

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    age_person(age);
    return 0;
}