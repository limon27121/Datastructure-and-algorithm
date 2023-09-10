// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  
 
  for(row=1;row<=n;row++){
      for(col=1;col<=n;col++){
        
        //condition for printing star in rectriangle shape
          if(row==1||row==n||col==1|col==n){
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