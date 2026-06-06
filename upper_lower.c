#include<stdio.h>
int main()
{
    char ch = 'M';
    if(ch>='A' && ch<='Z'){
        printf("It is Uppercase");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("It is lowercase");
    }
    else{
        printf("It is not Alphabet");
    }
}