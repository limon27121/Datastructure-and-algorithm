
  for(row=n-1;row>=1;row--){
       
        // print space
        
      for(col=1;col<=n-row;col++){
         printf(" ");
      }
       
      //print number
       
      for(col=1;col<=row;col++){
          printf("*",col);
      }
      printf("\n");
  }