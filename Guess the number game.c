//Guess the number game

#include<stdio.h>
#define MAX 25


int main()
{  int k,u;
   int a[MAX][MAX],i,n,j,num;
   printf("Enter the square root of the number till you want to guess: ");
   scanf("%d",&n);
  

    i=n-1;  //Bottom row
    j=(n-1)/2;  //Center column

    for(num=1; num<=n*n; num++)
    {
        a[i][j]=num;
        i++;//Move down
        j--;//Move left

        if(num%n==0)
        {
            i-=2;
            j++;

        }
        if(i==n)
            i=0;//Go to top most row
        if(j==-1)
            j=n-1;//Go to rightmost column

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            {printf("\n\n****New Game*****\n");
             printf("You have only 10 chances for each game\n");
             int chance =1;
             do{printf("Guess the number:");
                scanf("%d",&u);
                 if(u==a[i][j])
                   printf("Guess correct,You won\n");
                 else if(u>a[i][j])
                   printf("Type smaller\n");
                 else
                   printf("Type larger\n");
                 chance++;
            
                }while(u!=a[i][j] && chance!=10);
              if(chance==10)
                 printf("Chances over,you loose the game");
              
            
            }
    }
  
}
