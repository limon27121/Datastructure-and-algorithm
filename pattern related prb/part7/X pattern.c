// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  
 
  for(row=1;row<=n;row++){
      for(col=1;col<=n;col++){
        
        //condition for printing star in X shape
          if(row==col||col==(n-row)+1){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
     
      printf("\n");
  }

 
  
    return 0;
}