#include <iostream>
using namespace std;


int main() {
    int n,max,min;
     cout<<"enter array size"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    max=array[0];
    min=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<"max number is:"<<max<<" "<<endl<<"minimum number is:"<<min<<endl;
    return 0;
}
