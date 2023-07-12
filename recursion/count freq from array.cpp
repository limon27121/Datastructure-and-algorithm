#include <iostream>
using namespace std;

int myself(int arr[],int size,int value){
    //base condition
    if(size==1){
        if(arr[0]==value){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
    int myvalue=arr[size-1];
    int helper=myself(arr,size-1,value);
        if(myvalue==value){
            return 1+helper;
        }
        else{
            return helper;
        }
    }

}
int main() {
    int arr[5]={1,2,2,3,4};
    int m=0;
    cin>>m;
    int result=myself(arr,5,m);
    cout << result<<endl;

    return 0;
}