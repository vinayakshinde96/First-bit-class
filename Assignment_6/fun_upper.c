#include<stdio.h>

void upper_lower()
{
    char ch;
    printf("Enter any charecter : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Charecter is Uppercase : ");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Charecter is lowercase");
    }
    else{
        printf("INVALID CHARECTER ");
    }
    
}

int main()
{
    upper_lower();
    return 0;
}