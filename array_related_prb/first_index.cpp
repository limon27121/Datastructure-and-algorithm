#include <iostream>
using namespace std;

 void first_occurance(int array[],int n,int tracker){
    int check=0;
    for(int i=0;i<n;i++){
        if(array[i]==tracker){
           cout<<i;
            check++;
            break;
        }
        
    }
    if(check==0){
        cout<<-1;
    }
    
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
    
    first_occurance(array,n,tracker);
    return 0;
}