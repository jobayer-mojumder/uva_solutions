#include<stdio.h>
#include<math.h>
int main()
{
    long long x,n,m,k,i;
    scanf("%lld",&k);
    for(i=0;i<k;i++){
        scanf("%lld",&n);
        x=(sqrt(1+8*n)-1)/2;
        printf("%lld\n",x);
    }
    return 0;
}
