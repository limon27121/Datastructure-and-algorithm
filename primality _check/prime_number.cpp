#include <iostream>
using namespace std;
bool is_prime(int number){
    if(number<=1){
        return false;
    }
    for(int i=2;i*i<number;i++){
      if(number%i==0){
          return false;
      }  
      return true;
    }
}



int main(){
    int number,result;
    cout<<"enter your number"<<endl;
    cin>>number;
    result=is_prime(number);
    if(result==1){
        cout<<"prime number";
    }
    else{
        cout<<"not prime number";
    }
    return 0;
}