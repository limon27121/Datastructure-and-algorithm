// Online C compiler to run C program online
#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int temp[MAX_SIZE]; // Declares a temporary array
    int size;          // Total number of elements in array
    int i, j = 0;      // Loop control variables and initialize j to 0

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in the array */
    printf("Enter elements in array : ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Find duplicate elements in array and store unique elements in temp array
     */
    for(i = 0; i < size; i++)
    {
        int isDuplicate = 0;
        for(int k = 0; k < j; k++)
        {
            if(arr[i] == temp[k])
            {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate)
        {
            //j increase in implicit way
            temp[j++] = arr[i];
        }
    }

    printf("\nArray elements after deleting duplicates : ");
    for(i = 0; i < j; i++) // Loop should go up to j, not size
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
