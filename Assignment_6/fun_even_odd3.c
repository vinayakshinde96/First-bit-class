// 4rt type  arg or return value

#include<stdio.h>

int even_odd(int num){
    
    if(num %2 ==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num,result;
    printf("Enter any number : ");
    scanf("%d",&num);

    result = even_odd(num);

    if(result == 1){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;

}
