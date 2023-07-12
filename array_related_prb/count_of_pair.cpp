#include <iostream>
using namespace std;


int main() {
    int n,sum,count=0;
     cout<<"enter array size"<<endl;
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter your sum"<<endl;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( array[i]+array[j]==sum){
           
            count++;
            }
        }
    }
    cout<<"count of pair of sum:"<<count<<endl;
    return 0;
}