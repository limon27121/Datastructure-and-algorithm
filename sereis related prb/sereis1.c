// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int number;
  printf("enter your number: ");
  scanf("%d",&number);
  float sum=0;
  // n*(n+1)/2
  
  for(int i=1;i<=number;i++){
     
      if(i<number){
          printf("%d+",i);
      }
      else{
          printf("%d",i);
      }
      sum+=i;
  }
  printf("=%f",sum);

    return 0;
}