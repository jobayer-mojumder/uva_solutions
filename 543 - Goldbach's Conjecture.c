#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    int i,j;
    j=sqrt(n);
    for(i=2;i<=j;i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF && n>0){
        k=0;
        for(i=3;i<n;i++){
            if(isPrime(i)==1 && isPrime(n-i)==1){
                printf("%d = %d + %d\n",n,i,n-i);
                k=1;
                break;
            }
        }
        if(k==0){
            printf("Goldbach's conjecture is wrong.\n");
        }
    }

    return 0;
}
