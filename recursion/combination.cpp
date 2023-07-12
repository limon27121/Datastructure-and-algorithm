// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// ncr=c(n-1)r + c(n-1,r-1) r==0 means ans 1  (n==r) means ans 1 
int combination(int n,int r){
    int sum=0;
    if(r==0){
        return 1;
    }
    else if(n==r){
        return 1;
    }
    else{
        int mypart=combination(n-1,r);
        int colpart=combination(n-1,r-1);
        sum= mypart+colpart;
    }
   return sum;
}
int main() {
   int n,r;
   cin>>n>>r;
   cout<<combination(n,r);
    return 0;
}