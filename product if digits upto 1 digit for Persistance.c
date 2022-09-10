#include<stdio.h>

void per(long);

int main() {
    long n;
    printf("Enter the number: ");
    scanf("%ld",&n);
    per(n);
}

void per(long n) {
    int p=0;
    printf("%d",n);
    do {
        int i,rem,m=1;
        for(i=1; n>0; n=n/10)
        {   rem=n%10;
            m*=rem;

        }
        p=p+1;
        n=m;
        printf("-->%d",n);


    } while(n/10!=0);


    printf("\n\nPersistance is %d",p);




}
