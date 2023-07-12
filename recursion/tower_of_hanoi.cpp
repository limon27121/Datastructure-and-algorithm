// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// myself(n, src, dest, tmp)
// =   myself(n-1, src, tmp, dest)
//   + myself(1, src, dest, tmp)
//   + myself(n-1, tmp, dest, src)
  

int tower_of_hanoi(int disc,char s,char d,char t){
    if(disc==1){
        return 1;
    }
     else{
         int value1= tower_of_hanoi(disc-1,s,t,d);//disc goes to src to temp using destination
         int value2= tower_of_hanoi(1,s,d,t);//disc goes to src to destination using temp
         int value3= tower_of_hanoi(disc-1,t,d,s);//disc goes to temp  to  destination using src
         int sum=value1+value2+value3;
         return sum;
    }
    
}
int main() {
    int disc,result;
    char s,d,t;
    cin>>disc;
    result=tower_of_hanoi(disc,s,d,t);
    cout<<result;
    return 0;
}