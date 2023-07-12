// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int coin_change(int taka[],int sz,int amount){
    if(amount==0){
        return 1;
    }
    else if(amount<0){
        return 0;
    }
    else if(amount>0&&sz==0){
        return 0;
    }
     else{
           ///considering last coin each time
         int way1=coin_change(taka,sz,amount-taka[sz-1]);
         ///not considering the last coin each time
         int way2=coin_change(taka,sz-1,amount);
         int sum=way1+way2;
         return sum;
    }
    
}
int main() {
  int taka[]={1,2,5,10,20,50,100,200,500,100};
//   int taka[]={1,2,3,5};
   int amount=0,result=0,sz=10;
   cin>>amount;
   result=coin_change(taka,sz,amount);
   cout<<result;
  
  
    return 0;
}