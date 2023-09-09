#include <stdio.h>

int main() {
  int n,row,col;
   
  printf("enter your number: ");
  scanf("%d",&n);
   
  //upper part
  
   
   
//lower part
  for(row=1;row<=n;row++){
       
        // print space
        
      for(col=1;col<=n-row;col++){
         printf(" ");
      }
       
      //print number
       
      for(col=1;col<=row;col++){
          printf("%d",col);
      }
      printf("\n");
  }

    return 0;
}












