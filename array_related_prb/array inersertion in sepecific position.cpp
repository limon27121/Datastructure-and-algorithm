#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int i, size, num, pos;

    /* Input size of the array */
    cout << "Enter size of the array : ";
    cin >> size;

    /* Input elements in array */
    cout << "Enter elements in array : ";
    for(i = 0; i < size; i++) {
        cin >> arr[i];
    }

    /* Input new element and position to insert */
    cout << "Enter element to insert : ";
    cin >> num;
    cout << "Enter the element position : ";
    cin >> pos;

    /* If position of element is not valid */
    if(pos > size + 1 || pos <= 0) {
        cout << "Invalid position! Please enter a position between 1 to " << size;
    }
    else {
        /* Make room for the new array element by shifting to the right */
        for(i = size - 1; i >= pos - 1; i--) {
            arr[i + 1] = arr[i];
        }

        /* Insert the new element at the given position and increment the size */
        arr[pos - 1] = num;
        size++;

        /* Print array after insert operation */
        cout << "Array elements after insertion : ";
        for(i = 0; i < size; i++) {
            cout << arr[i] << "\t";
        }
    }

    return 0;
}
