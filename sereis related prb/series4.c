// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int number;
  printf("enter your number: ");
  scanf("%d",&number);
  float sum=0;
  
  
  for(int i=1;i<=number;i++){
     if(i<number){
     printf("1/%d+",i*i);
     sum+=(1.0/i*i);
     }
   else{
       printf("1/%d",i*i);
        sum+=(1.0/i*i);
   }
     
  }
  printf("=%f",sum);

    return 0;
}