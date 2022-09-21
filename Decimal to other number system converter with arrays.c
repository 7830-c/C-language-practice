//Decimal to other systems
#include<stdio.h>

void convert(int,int);

int main()
{   printf("Decimal to other number system calculator");

    while(1) {
        int num,choice,base;
        printf("\n\nEnter the decimal number: ");
        scanf("%d",&num);
        printf("1.Hexadecimal\n");
        printf("2.Octal\n");
        printf("3.Binary\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice) {
        case 1:
            base=16;
            break;
        case 2:
            base=8;
            break;
        case 3:
            base=2;
            break;
        default:
            printf("Wrong choice\n");
        }
        convert(num,base);

    }
}


void convert(int num,int base) {
    char arr[25];
    int rem,j,i=0;

    while(num>0)
    {
        rem=num%base;
        num/=base;
        if(rem>9 && rem<16)
            arr[i++]=rem-10+'A';
        else
            arr[i++]=rem+'0';

    }

    for(j=i-1; j>=0; j--)
        printf("%c",arr[j]);






}
