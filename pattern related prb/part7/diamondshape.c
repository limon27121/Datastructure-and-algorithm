// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  
  //upperpart of diamond shape
  for(row=1;row<=n;row++){
      for(col=1;col<=n-row;col++){
          printf(" ");
      }
      for(col=1;col<=2*row-1;col++){
           printf("*");
      }
      printf("\n");
  }

  //lower part of diamond shape
  for(row=n-1;row>=1;row--){
      for(col=1;col<=n-row;col++){
          printf(" ");
      }
      for(col=1;col<=2*row-1;col++){
           printf("*");
      }
      printf("\n");
  }
    return 0;
}