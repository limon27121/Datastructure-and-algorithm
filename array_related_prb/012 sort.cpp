#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int arr[], int n) {
    //count all number (0,1,2)
    int zero_count=0;
    int one_count=0;
    int two_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        zero_count++;
        else if(arr[i]==1)
        one_count++;
        else
        two_count++;
    }
     //update the array to assending order
    for(int i=0;i<n;i++){
        if(zero_count!=0){
            arr[i]=0;
            zero_count--;
        }
        else if(one_count!=0){
            arr[i]=1;
         one_count--;
        }
        else if(two_count!=0){
            arr[i]=2;
          two_count--;
        }
    }
}


// void sort012(int arr[], int n) {
//     sort(arr,arr+n);
 

// }
int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}