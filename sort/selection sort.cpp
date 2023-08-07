
#include <iostream>
using namespace std;

//swap 2 numbers 
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//print the whole array
void print_array(int arr[], int n){
     
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }
 
 //main function of selection sort

 void slection_sort(int arr[],int n){
     //visited unsorted data
     for(int i=0;i<n-1;i++){
         int min_index=i;
         for(int j=i+1;j<n;j++){
             
    // To sort in descending order, change > to < in this line.
    // Select the minimum element in each loop.
//compare the 2 value of unsorted and sorted array

             if(arr[j]<arr[min_index]){
                 min_index=j;
             }
         }
         swap(&arr[min_index],&arr[i]);
     }
 }
 
 

int main(){
    int arr[]={20, 12, 10, 15, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    slection_sort(arr,n);
    print_array(arr,n);
    return 0;
}