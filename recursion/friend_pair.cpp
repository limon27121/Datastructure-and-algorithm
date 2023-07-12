#include <iostream>
using namespace std;
int friend_pair(int friend_number){
    if(friend_number==1){
        return 1;
    }
    else if(friend_number==2){
        return 2;
    }
    else{
        int way1=friend_pair(friend_number-1);
        int way2=(friend_number-1)*friend_pair(friend_number-2);
        int total_way=way1+way2;
        return total_way;
    }
    
}

int main() {
    int friend_number=0;
    cin>>friend_number;
    cout<<friend_pair(friend_number)<<endl;
    return 0;
}