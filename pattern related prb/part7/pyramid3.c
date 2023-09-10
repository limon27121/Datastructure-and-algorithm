// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  
  
  for(row=1;row<=n;row++){
      for(col=1;col<=n-row;col++){
          printf(" ");
      }
      for(col=1;col<=row;col++){
           printf("* ");
      }
      printf("\n");
  }
 
  
    return 0;
}