#include<stdio.h>
#include<string.h>
int main()
{
    char str[34];

    printf("Emter any element : ");
    scanf("%s",str);

    printf("\nEntered string is : %s",str);
    
    int len = strlen(str);
    printf("\nlength is : %d",len);
}