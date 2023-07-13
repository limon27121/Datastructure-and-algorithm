#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;
int duplicates(int arr[], int n) {  
    if (n==0 || n==1)      
        return n;

    int j = 0;

    for (int i=0; i < n; i++) {    
        if (arr[i] != arr[i+1])

            arr[j++] = arr[i];
             //replace array without duplicate value
}
    return j; 
      //new array size without duplicate value
}

void kthSmallestLargest(int arr[], int &n, int k){
    sort(arr, arr + n);    
    n = duplicates(arr, n);   
       
    if(k<=n){   
        cout << arr[n-k] <<" "<< arr[k-1] << endl; 

        // arr[n-k] contain small value and [k-1] contain largest value   
        
    }    
    else {        
        cout << -1 <<" "<< -1 << endl;    } 
    
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}