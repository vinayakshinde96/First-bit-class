#include<stdio.h>

int vovels(char ch){

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
     ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 1;
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

    result = vovels(ch);

    if(result == 1){
        printf("vovels");
    }
    else{
        printf("consonant");
    }
    
    return 0;
    
}