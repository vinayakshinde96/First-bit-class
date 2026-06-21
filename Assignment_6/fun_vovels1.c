#include<stdio.h>

void vovels(char ch){

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
     ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Char is vovels");
     }
else{
    printf("char is consonant");

}
}

int main()
{
    char ch ;
    printf("Enter any char : ");
    scanf("%c",&ch);

    vovels(ch);
    return 0;
    
}