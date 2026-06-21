#include<stdio.h>

int upper_lower(char ch)
{
    
    if(ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return 2;
    }
    else{
        return 0;
    }
}

int main()
{
    int result;
    char ch;
    printf("Enter any charecter : ");
    scanf(" %c",&ch);

    result = upper_lower(ch);

    if(result == 1){
        printf("Upper");
    }
    else if (result == 2)
    {
        printf("lOWER");
    }
    else{
        printf("Invalid");
    }
  
    return 0;
}