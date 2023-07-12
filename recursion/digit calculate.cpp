#include <iostream>
using namespace std;

void myself(int number){
    //base condition
    if(number>=0 && number<=9){
        
        cout<<number<<endl;
    }
    else{
    int myvalue=number%10;
   
    int restvalue=number/10;
       myself(restvalue);
        
       cout<<myvalue<<endl;
       
    }

}
int main() ///CEO
{   int count=0;
    myself(95783);
   
    return 0;
}