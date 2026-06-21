#include<stdio.h>

int vovels(){
    char ch;
    printf("Enter any charecter : ");
    scanf(" %c",&ch);

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
    result = vovels();

    if(result == 1){
        printf("vovels");
    }
    else{
        printf("consonant");
    }
    
    return 0;
    
}