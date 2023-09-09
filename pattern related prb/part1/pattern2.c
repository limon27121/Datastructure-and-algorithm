// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,row,col;
   
   printf("enter your number: ");
   scanf("%d",&n);
   //inner lopp
   for(row=1;row<=n;row++){
       //outer loop
       for(col=1;col<=row;col++){
         
         //col number even
        if(col%2==0){
            printf("0");
        }
        //col number odd
            else{
                printf("1");
            }
        
       }
       printf("\n");
   }

    return 0;
}