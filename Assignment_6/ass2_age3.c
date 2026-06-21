#include<stdio.h>

int age_person(int age)
{
    
    if(age < 12){
        return 1;
    }
    else if(age >= 12 && age <= 19){
        return 2;
    }
    else if(age >= 20 && age <= 59){
        return 3;
    }
    else if (age >= 60){
        return 4;
    }
    else{
        return 5;
    }
}

int main()
{
    int result;
    int age;

    printf("Enter age : ");
    scanf("%d",&age);

    result = age_person(age);

    if(result == 1){
        printf(" chiled");
    }
    else if(result == 2){
        printf("Teenager ");
    }
    else if(result == 3){
        printf("Adult ");
    }
    else if(result == 4){
        printf(" Seniour");
    }
    else{
        printf("Invalid ");
    }

    return 0;
}