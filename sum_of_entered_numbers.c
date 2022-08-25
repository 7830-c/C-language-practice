#include <stdio.h>  
main(){
   int sum=0;
   long num;
   do{printf("Type the number(0 to quit!):");
      scanf("%ld",&num);
      sum+=num;
       }while(num!=0);
printf("Sum of entered numbers = %ld",sum);

}