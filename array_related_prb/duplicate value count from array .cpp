#include <iostream>
using namespace std;

#define MAX_SIZE 100  // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

    /* Input size of array */
    cout << "Enter size of the array : ";
    cin >> size;

    /* Input elements in array */
    cout << "Enter elements in array : ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    /*
     * Find all duplicate elements in array
     */
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // if find the duplicate value count increase and break the inner loop
                count++;
                break;
            }
        }
    }

    cout << "Count of duplicate value from array: " << count << endl;
    return 0;
}
