#include <iostream>
using namespace std;

#define MAX_SIZE 100      // Maximum size of the array

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2;
    int index1, index2, mergeIndex;
    int i, j;

    /* Input size of first array */
    cout << "Enter the size of the first array : ";
    cin >> size1;

    /* Input elements in the first array */
    cout << "Enter elements in the first array : ";
    for(i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    /* Input size of the second array */
    cout << "\nEnter the size of the second array : ";
    cin >> size2;

    /* Input elements in the second array */
    cout << "Enter elements in the second array : ";
    for(i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int mergeSize = size1 + size2;
     index1 = 0, index2 = 0;

    for(mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++)
    {
        // Check for index out of bounds
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }

        // arr1 is lower than arr2
        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        // arr2 is lower than arr1
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    /*
     * Merge remaining array elements
     */
    
    // arr1
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    
    // arr2
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

    cout << "\nArray merged in ascending order : ";
    for(i = 0; i < mergeSize; i++)
    {
        cout << mergeArray[i] << " ";
    }

    return 0;
}
