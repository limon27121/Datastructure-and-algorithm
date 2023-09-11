// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int number;
  printf("enter your number: ");
  scanf("%d",&number);
  float sum=0;
  
  // n*(n+1)(2n+1)/6
  
  for(int i=1;i<=number;i++){
     
      if(i<number){
          printf("%d+",i*i);
      }
      else{
          printf("%d",i*i);
      }
      sum+=i*i;
  }
  printf("=%f",sum);

    return 0;
}