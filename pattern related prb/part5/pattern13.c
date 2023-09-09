#include <stdio.h>

int main() {
  int n,row,col;
   
  printf("enter your number: ");
  scanf("%d",&n);
   
 
 

   
   
//upper part
  for(row=1;row<=n;row++){
       
        // print space
        
      for(col=1;col<=n-row;col++){
         printf(" ");
      }
       
      //print star
       
      for(col=1;col<=row;col++){
          printf("*",col);
      }
      printf("\n");
  }


 //lower part
 
  for(row=n-1;row>=1;row--){
       
        // print space
        
      for(col=1;col<=n-row;col++){
         printf(" ");
      }
       
      //print star
       
      for(col=1;col<=row;col++){
          printf("*",col);
      }
      printf("\n");
  }




    return 0;
}












