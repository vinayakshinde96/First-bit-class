#include<stdio.h>

void upper_lower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase");
    }
    else{
        printf("INVALID");
    }
}

int main()
{
    char ch;
    printf("Enter any charecter : ");
    scanf("%c",&ch);

    upper_lower(ch);
    return 0;
}