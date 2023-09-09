
#include <stdio.h>

int main() {
   int n,row,col;
   
   printf("enter your number: ");
   scanf("%d",&n);
   //inner lopp
   for(row=1;row<=n;row++){
       //outer loop
       for(col=1;col<=row;col++){
           //print column value
           printf("%d",col);
       }
       printf("\n");
   }

    return 0;
}