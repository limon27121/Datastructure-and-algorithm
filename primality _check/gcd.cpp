#include <iostream>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
   int a,b;
   cout<<"enter your maximum number"<<endl;
   cin>>a;
   cout<<"enter your minimum number"<<endl;
   cin>>b;
   int result=gcd(a,b);
   cout<<"gcd of 2 numbers: "<<result;
   return 0;
}