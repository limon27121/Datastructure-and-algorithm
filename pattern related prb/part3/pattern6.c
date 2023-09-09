#include <stdio.h>

int main() {
   int n,row,col;
   
   printf("enter your number: ");
   scanf("%d",&n);
   
   //upper part
   for(row=1;row<=n;row++){
       for(col=1;col<=row;col++){
           printf("%d",col);
       }
       printf("\n");
   }
   
   
//lower part
   for(row=n-1;row>=1;row--){
       //outer loop
       for(col=1;col<=row;col++){
         printf("%d",col);
       
       }
       printf("\n");
   }

    return 0;
}