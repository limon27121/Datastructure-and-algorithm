#include <iostream>
using namespace std;

int myself(int base,int power){
    //base condition
    if(power==1){
        return base;
    }
    else{
    int myvalue=base;
    int helper=myself(base,power-1);
        return myvalue*helper;
    }

}
int main() {
    int m=0,n=0;
    cin>>m>>n;
    int result=myself(m,n);
    cout << result<<endl;

    return 0;
}