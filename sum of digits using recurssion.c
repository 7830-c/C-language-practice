#include<stdio.h>
long sumd(long);
void main(){
long n;
printf("Enter the number: ");
scanf("%ld",&n);
printf("Sum of digits of %ld is %ld",n,sumd(n));
}

long sumd(long n){
if(n==0)
   return 0;
else
    return (n%10 + sumd(n/10));




}
