#include<stdio.h>

void vovels()
{
    char ch ;
    printf("Enter any charecter :");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
       {
        printf("Charecter is vovels");
       }
       else{
        printf("Charecter is consonant");
       }
}

int main()
{
    vovels();
    return 0;
}