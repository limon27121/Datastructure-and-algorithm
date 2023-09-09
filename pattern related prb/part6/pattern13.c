#include <stdio.h>

int main() {
  int n,row,col;
   
  printf("enter your number: ");
  scanf("%d",&n);
   
 
 

  for(row=n;row>=1;row--){
       
     
        
      for(col=1;col<=n;col++){
         printf("*");
      }
     printf("\n");
}
    return 0;
}












