// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool binary_search(vector<int>v,int value,int first_index,int last_index){
    if(first_index>last_index){
        return 0;
    }
     else{
         int midindex=(first_index+last_index)/2;
         int mid_value=v[midindex];
         //value found
        if(mid_value==value){
            return 1;// it also gives midindex
        }
        //value less than midvalue
     else if(value<mid_value){
         bool v1=binary_search(v,value,first_index,midindex-1);
         return v1;
     }
     //value greater than midvalue
     else if(value>mid_value){
         bool v1=binary_search(v,value,midindex+1,last_index);
         return v1;
     }
    }
    
}
int main() {
    int arr[]={10,5,-20,100,1000,-500};
    //declare vector
    vector<int>v(arr,arr+6);
    //sort vector
    sort(v.begin(),v.end());
    int value;
    cin>>value;
    cout<<binary_search(v,value,0,v.size()-1)<<endl;
    return 0;
}