// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// preorder:
// ---------
// parent
// left - friend
// right - friend

// postorder:
// ----------

// left 
// right
// parent

// Inorder:
// --------
// left
// parent
// right

void preorder(int bin_tree[],int size,int my_index){
    if(my_index>=size || bin_tree[my_index]==-1){
        return ;
    }
    else{
        cout<<bin_tree[my_index]<<" ";//print the parent
        int left_index=2*my_index;//find left child
        int right_index=2*my_index+1;//find right child
        preorder(bin_tree,size,left_index);
        preorder(bin_tree,size,right_index);
    }
}
void postorder(int bin_tree[],int size,int my_index){
    if(my_index>=size || bin_tree[my_index]==-1){
        return;
    }
    else{
        int left_index=2*my_index;
        postorder(bin_tree,size,left_index);
        int right_index=2*my_index+1;
        postorder(bin_tree,size,right_index);
        cout<<bin_tree[my_index]<<" ";
    }
}

void inorder(int bin_tree[],int size,int my_index){
    if(my_index>=size || bin_tree[my_index]==-1){
        return;
    }
    else{
        int left_index=2*my_index;
        inorder(bin_tree,size,left_index);
        cout<<bin_tree[my_index]<<" ";
        int right_index=2*my_index+1;
        inorder(bin_tree,size,right_index);
       
    }
}


int main() {
int bin_tree[]={-1,100,300,50,120,200,30,-1,-1,20,80,150,-1,99};
int size=sizeof(bin_tree)/sizeof(int);
 cout<<"preorder: ";
 preorder(bin_tree,size,1);
 cout<<endl;
 cout<<"postorder: ";
 postorder(bin_tree,size,1);
  cout<<endl;
 cout<<"inorder: ";
 inorder(bin_tree,size,1);
 
    return 0;
}