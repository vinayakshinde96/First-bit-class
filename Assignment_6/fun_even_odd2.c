// 3rd type no arg but return value

#include<stdio.h>

int even_odd(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if(num %2 ==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    result = even_odd();

    if(result == 1){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;

}
