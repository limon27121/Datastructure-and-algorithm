// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int myself(int arr[],int size){
    //base condition
    if(size==1){
        return arr[size-1];
    }
    else{
    int myvalue=arr[size-1];//last index
    int helper=myself(arr,size-1);
        return myvalue+helper;
    }

}
int main() {
    int arr[]={1,2,3,4,5};
    int result=myself(arr,5);
    cout << result<<endl;

    return 0;
}