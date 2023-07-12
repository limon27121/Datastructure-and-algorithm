#include <iostream>
using namespace std;

 int last_occurance(int array[],int n,int tracker){
    
    for(int i=n-1;i>=0;i--){
        if(array[i]==tracker){
           return i;
          
        }
        
    }
  
        return -1;
    
}
int main() {
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int tracker;
    cin>>tracker;
    
    cout<<last_occurance(array,n,tracker);
    return 0;
}