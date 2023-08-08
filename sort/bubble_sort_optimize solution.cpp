
// Bubble sort in C++

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size-1; step++) {
      //use flag to check if swap function is used
      int flag=0;
      
    // loop to compare array elements

    for (int i = 0; i < size-1; i++) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        //if swap function occured flag changes  to  1
        flag=1;
      }
    }
    
    /* after swapping value check swap function is called?
     if function called flag==1 or function not called flag==0 and
     1st loop break */
    if(flag==0)
        break;
    
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << array[i]<<" " ;
  }

}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  printArray(data, size);
}