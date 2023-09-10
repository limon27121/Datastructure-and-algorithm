#include <stdio.h>

int main() {
    // Write C code here
  int n,row,col;
  printf("enter your number:");
  scanf("%d",&n);
  for(row=1;row<=n;row++){
      for(col=1;col<=row;col++){
          printf("%d ",row*col);
      }
      printf("\n");
  }
    return 0;
}