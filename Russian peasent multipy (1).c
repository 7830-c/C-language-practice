//Multiplication using russian peasent method
#include<stdio.h>

main()
{int f,s,sum=0,x,y;
 printf("Enter the two numbers: ");
 scanf("%d%d",&x,&y);
 f=x;
 s=y;
 while(x>=1)
 {if(x%2!=0)
     sum=sum+y;
    x/=2;
    y*=2;}   
printf("%d x %d = %d \n",f,s,sum);
}