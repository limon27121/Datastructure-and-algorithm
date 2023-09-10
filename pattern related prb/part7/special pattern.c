// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  
//  1st half side
  for(row=1;row<=n;row++){
      for(col=1;col<=n-row;col++)
        
        printf(" ");
      for(col=1;col<=row;col++)
          printf("%d",col);
    //   2nd halfside
      for(col=row-1;col>=1;col--)
          printf("%d",col);
      
      printf("\n");
      }
     
  
  

 
  
    return 0;
}