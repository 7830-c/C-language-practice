#include<stdio.h>
#include<math.h>
void quard(int,int,int);
main(){
int a,b,c;
printf("Enter the coffercient of x^2 , x and constant : ");
scanf("%d%d%d",&a,&b,&c);
quard(a,b,c);

}

void quard(int a,int b,int c){
float D,x,y;
D=(b*b)-(4*a*c);
if(D<0)
   printf("Imaginary roots");
if(D==0)
   { printf("Both roots are equal\n");
    x=-b/(2*a);
    printf("Roots are %.1f and %.1f. ",x,x);}
if(D>0)
   {printf("Both roots are distinct.\n");
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    printf("Roots are %.1f and %.1f. ",x,y);
      } 
}
