#include <iostream>
using namespace std;

bool is_find(int array[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==array[i]){
            return true;
        }
        else{
            return false;
        }
    }
}
int main() {
    int n,x,result;
    cout<<"enter search value"<<endl;
    cin>>x;
     cout<<"enter array size"<<endl;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    result=is_find(array,n,x);
    if(result==1){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}