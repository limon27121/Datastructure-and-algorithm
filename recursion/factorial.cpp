// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int factorial(int number){
    if(number==1){
        return 1;
    }
    else{
        int mypart=number;
        int col_part=factorial(number-1);
        return mypart*col_part;
    }
}

int main() {
    int number,result=0;
    cin>>number;
    result=factorial(number);
    cout<<result<<endl; 
       
    return 0;
}