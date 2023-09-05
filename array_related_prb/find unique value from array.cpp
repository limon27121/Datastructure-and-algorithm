#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int size;

    /* Input size and elements in the array */
    cout << "Enter size of the array : ";
    cin >> size;
    cout << "Enter elements in array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
       
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    cout << "Unique elements of the array: ";
    for (int i = 0; i < size; i++) {
        if (freq[i] == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
