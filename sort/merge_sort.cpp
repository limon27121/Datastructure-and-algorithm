// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 void merge_array_add(int arr[],int startind,int midind,int endind){
    //create left array for holding left part of main array
     int leftsize=(midind-startind+1);
     int leftarr[100];

    //copy main array  left part  to left array
     for(int ind=0;ind<leftsize;ind++){
         leftarr[ind]=arr[startind+ind];
     }

     //create right array for holding right part of main array
     int rightsize=(endind-(midind+1)+1);
     int rightarr[100];
     
     //copy main array  right part  to right array
     for(int ind=0;ind<rightsize;ind++){
         rightarr[ind]=arr[midind+1+ind];
     }

     int rightind=0;
     int leftind=0;
     for(int i=startind;i<=endind;i++){

        //if leftarray have no value to put main array
        //main array have put the right array value
         if(leftind==leftsize){
             arr[i]=rightarr[rightind];
             rightind++;
         }

         //if rightarray have no value to put main array
        //main array have put the left array value
         else if(rightind==rightsize){
             arr[i]=leftarr[leftind];
             leftind++;
         }

         //ascending order sorting
         //left array value is small so that main array hold left array value

         //if descending order main array hold right array value
            //    ex: arr[i]=rightarr[rightind];

         else if(leftarr[leftind]<rightarr[rightind]){
             arr[i]=leftarr[leftind];
             leftind++;
         }
         //right array value is small so hold right array value to main array
         else{
             arr[i]=rightarr[rightind];
             rightind++;
         }
     }
 }
 void merge_sort(int arr[],int startind,int endind){
    //base case 
    //if array have only one elements
    //return 1 element
     if(startind==endind){
         return;
     }
    else if(startind<endind){
        int mid=(startind+endind)/2;
        //call merge sort for start to mid
        merge_sort(arr,startind,mid);

        //call merge sort for mid+1 TO END
        merge_sort(arr,mid+1,endind);

        //merge array which are sorted now
        merge_array_add(arr,startind,mid,endind);
    
     }
 }
int main() {
     int arr[]={14,7,3,12,9,11,6,2};
     int sz=sizeof(arr)/sizeof(int);
     //call merge sort
     merge_sort(arr,0,sz-1);

     //print the array
     for(int ind=0;ind<sz;ind++){
         cout<<arr[ind]<<" ";
     }
     cout<<endl;

    return 0;
}