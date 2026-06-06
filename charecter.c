#include<stdio.h>
int main()
{
    char ch = 'Z';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("char is Vowels");
    }
    else{
        printf("char is consonant");
    }

}