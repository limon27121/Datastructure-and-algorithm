// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void counter_sort(int array[],int n){
    int output[10];
    int count[10];
    int max=array[0];
    //find maximum from array
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
   // Initialize count array with all zeros.
  for (int i = 0; i <= max; i++) {
    count[i] = 0;
  }
  

  // Store the count of each element
  for (int i = 0; i < n; i++) {
    count[array[i]]++;
  }
  


  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

//create output[] which is sorted array and this length is same of array[]
    
    for(int i=n-1;i>=0;i--){
        output[--count[array[i]]]=array[i];
    }
    
    
    //copy from output array to main array
    for(int i=0;i<n;i++){
        array[i]=output[i];
    }
    
}
//print the array

 void print_array(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}


int main() {
    
     int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
 
  counter_sort(array,n);
  print_array(array,n);
    

    return 0;
} 