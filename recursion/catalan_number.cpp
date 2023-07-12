// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//C0 = 1
//Cn = Σ(Ci * Cn-i-1) for i = 0 to n-1
int catalan_number(int number){
    if(number==0){
        return 1;
    }
    else{
        int sum=0,mul=0;
        for(int i=0;i<number;i++){
            int mypart=catalan_number(i);
            int colpart=catalan_number(number-i-1);
            mul=mypart*colpart;
            sum+=mul;
        }
        return sum;
    }
}

int main(){
    int number;
    cin>>number;
    cout<<catalan_number(number)<<endl;
}