

#include <iostream>
using namespace std;

int linear_search(int array[],int size,int value)
{
    for(int i=0;i<=size;i++){
        if(array[i]==value){
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int size=sizeof(array)/sizeof(array[0]);
    int value=0;
    cout<<"enter your finding value: ";
    cin>>value;
    
    int result=linear_search(array,size,value);
    
    if(result==-1){
        cout<<"value not found"<<endl;
    }
    else{
        cout<<"value found in: "<<result+1;
    }
}
