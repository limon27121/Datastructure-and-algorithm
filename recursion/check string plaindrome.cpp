// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

bool checkplaindrome(string s,int tracker){
    int sz=s.size();
    int first_index=tracker;
    int last_index=sz-1-tracker;
    
    if(first_index>=last_index){
        return true;
    }
    else{
        int first_char=s[first_index];
        int last_char=s[last_index];
        bool col_result=(s,tracker+1);
        if(first_char==last_char&&col_result==true){
            return true;
        }
        else{
            return false;
        }
    }
    
}

int main() {
    string s1;
    cin>>s1;
    bool result=checkplaindrome(s1,0);
    if(result==true){
        cout<<"plaindrome"<<endl;
    }
    else{
        cout<<"not a plaindrome"<<endl;
    }
       
    return 0;
}