// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
vector<int> countDivisor(int n) {
  int divisor = 0;
  vector <int>store;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
     store.push_back(i);
    }
  }
  return store;
}
int main() {
    int n;
    cin>>n;
  vector<int>result;
  result= countDivisor(n);
  
for (auto i = result.cbegin(); i != result.cend(); ++i)
        cout << *i << " ";
        
    return 0;
}