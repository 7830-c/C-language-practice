#include<stdio.h>

void decon(int,int);
main(){
  int choice,num,base;
  while(1){
  printf("\n1.Binary\n");
  printf("2.Octal\n");
  printf("3.Hexadecimal\n");
  printf("4.Quit\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice){
    case 1: 
       base=2;
       break;
    case 2:
       base =8;
       break;
    case 3:
       base = 16;
       break;
    case 4:
       exit(1);
    default:
       printf("Wrong choice");
       continue;}


    printf("Enter the decimal number: ");
    scanf("%d",&num);
    decon(num,base);
    printf("\n\n");
}
}



void decon(int num,int base)
{
   int rem;
   rem=num%base;
   num/=base;
   if(num>0)
      decon(num,base);
   if(rem<10)
      printf("%d",rem);
   else
      printf("%c",rem-10+'A');
   





}
