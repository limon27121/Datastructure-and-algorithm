#include <iostream>
using namespace std;

int myself(int number){
    //base condition
    if(number>=0 && number<=9){
        
       return number;
    }
    else{
    int myvalue=number%10;
    int restvalue=number/10;
       int colsum=myself(restvalue);
        
        myvalue+=colsum;
      return myvalue;
       
    }

}
int main() ///CEO
{   int sum=0;
    sum=myself(95783);
   cout<<sum;
    return 0;
}