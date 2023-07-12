// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int startind,int endind){
    //compare number
    int pivot=arr[endind];
    //tracking pointer
    int i=(startind-1);
    
    for(int j=startind;j<=endind-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[endind]);
    return i+1;
    
}


 void quick_sort(int arr[],int startind,int endind){
     if(startind<endind){
         int pivot=partition(arr,startind,endind);
         //leftside
         quick_sort(arr,startind,pivot-1);
         //rightside
         quick_sort(arr,pivot+1,endind);
     }
 }
 
 

 
 
int main() {
   int arr[] = { 64, 25, 12, 22, 11 };
   int size=sizeof(arr)/sizeof(int);
 quick_sort(arr,0,size-1);
   
  for(int ind=0;ind<size;ind++){
      cout<<arr[ind]<<" ";
  }

    return 0;
}