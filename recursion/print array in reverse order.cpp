#include <iostream>
using namespace std;

void myself(int arr[],int size){
    //base condition
    if(size==1){
        
        cout<<arr[0]<<" ";
    }
    else{
    int myvalue=arr[size-1];
          cout<<myvalue<<" ";
        myself(arr,size-1);
       
        }
    }


int main() {
    int arr[5]={1,2,3,4,5};
    myself(arr,5);

    return 0;
}