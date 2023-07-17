// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector<bool>marked;
 void generatePrimes(int n){
     marked.clear();
     marked.resize(n+1,0);
     marked[0]=marked[1]=1;
     for(int i=2;i*i<=n;i++){
         //if number is prime
         if(marked[i]==0){
             for(int mul=i*i;mul<=n;mul+=i){
                 //number is not prime
                 marked[mul]=1;
             }
         }
     }
     //print the prime numbers
     for(int i=2;i<=n;i++){
         if(marked[i]==0){
             cout<<i<<" ";
         }
     }
     cout<<endl;
     
 }

int main() {
    int n;
    cout<<"enter your input: ";
    cin>>n;
    generatePrimes(n);
    

    return 0;
}