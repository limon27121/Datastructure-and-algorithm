// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//using divide and conquer method and here mid value is return as result

int binary_search(vector<int>v,int first_index,int last_index,int value)
{
    while(first_index<=last_index){
        int mid_index=(first_index+last_index)/2;
        int mid=v[mid_index];
        if(mid==value){
            return mid_index;
            break;
        }
        else if(mid>value){
            last_index=mid_index-1;
        }
        else{
            first_index=mid_index+1;
        }
    }
    
    return -1;
}

int main() {
    int arr[]={10,5,-20,100,1000,-500};
    //declare vector
    vector<int>v(arr,arr+6);
    //sort vector
    sort(v.begin(),v.end());
    int value;
    cin>>value;
    int result=binary_search(v,0,v.size()-1,value);
    if(result==-1){
        cout<<"value not found";
    }
    else{
        cout<<"value found in index: "<<result;
    }
    return 0;
}