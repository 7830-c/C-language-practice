//a*b,a/b,a%b without using actual operator
#include<stdio.h>
int mul(int,int);
int div(int,int);
int rem(int,int);

void main(){
int a,b;
printf("Enter a and b : ");
scanf("%d%d",&a,&b);
printf("Multiplication of %d and %d is %d\n",a,b,mul(a,b));
printf("Quotint of %d and %d is %d\n",a,b,div(a,b));
printf("Remainder of %d and %d is %d\n",a,b,rem(a,b));

}


int mul(int a,int b){
int p=0;
while(b>0){
p=p+a;
b--;
}
return p;

}

int div(int a,int b){
int c=0;
while(a>=b){
c=c+1;
a=a-b;

}
return c;
}
int rem(int a,int b){

while(a>b||a!=0){
a=a-b;
}
return a;
}
