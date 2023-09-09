#include <stdio.h>

int main() {
  int n,row,col;
   
  printf("enter your number: ");
  scanf("%d",&n);
   
  //upper part
  
   
   
//lower part
  for(row=n;row>=1;row--){
       
        // print space
        
      for(col=1;col<=n-row;col++){
         printf(" ");
      }
       
      //print  row number
       
      for(col=1;col<=row;col++){
          printf("%d",row);
      }
      printf("\n");
  }

    return 0;
}












