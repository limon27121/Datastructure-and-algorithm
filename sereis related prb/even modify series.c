// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int number;
  printf("enter your number: ");
  scanf("%d",&number);
  float sum=0;
  
  
  for(int i=2;i<=number;i+=2){
     if(i<number){
     printf("1/%d+",i*i);
     sum+=i;
     }
  else{
      printf("1/%d",i*i);
        sum+=i;
  }
     
  }



    return 0;
}