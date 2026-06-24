#include<stdio.h>

int main()
{
    int arr[5];
    int i, j, count;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in array are:\n");

    for(i = 0; i < 5; i++)
    {
        count = 0;

        if(arr[i] > 1)
        {
            for(j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    count++;
                    break;
                }
            }

            if(count == 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    
}