// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 void merge_array_add(int arr[],int startind,int midind,int endind){
     int leftsize=(midind-startind+1);
     int leftarr[100];
     for(int ind=0;ind<leftsize;ind++){
         leftarr[ind]=arr[startind+ind];
     }
     int rightsize=(endind-(midind+1)+1);
     int rightarr[100];
     for(int ind=0;ind<rightsize;ind++){
         rightarr[ind]=arr[midind+1+ind];
     }
     int rightind=0;
     int leftind=0;
     for(int i=startind;i<=endind;i++){
         if(leftind==leftsize){
             arr[i]=rightarr[rightind];
             rightind++;
         }
         else if(rightind==rightsize){
             arr[i]=leftarr[leftind];
             leftind++;
         }
         else if(leftarr[leftind]<rightarr[rightind]){
             arr[i]=leftarr[leftind];
             leftind++;
         }
         else{
             arr[i]=rightarr[rightind];
             rightind++;
         }
     }
 }
 void merge_sort(int arr[],int startind,int endind){
     if(startind==endind){
         return;
     }
    else if(startind<endind){
        int mid=(startind+endind)/2;
        merge_sort(arr,startind,mid);
        merge_sort(arr,mid+1,endind);
        merge_array_add(arr,startind,mid,endind);
    
     }
 }
int main() {
     int arr[]={14,7,3,12,9,11,6,2};
     int sz=sizeof(arr)/sizeof(int);
     merge_sort(arr,0,sz-1);
     for(int ind=0;ind<sz;ind++){
         cout<<arr[ind]<<" ";
     }
     cout<<endl;

    return 0;
}