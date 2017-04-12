#include <stdio.h>
int main(){
    long long int m,n,sum1,sum2,sum,test,i;
    scanf("%lld",&test);
    for(i=1;i<=test;i++){
        scanf("%lld%lld",&m,&n);
            sum1=m/3;
            sum2=n/3;
            sum=sum1*sum2;
            printf("%lld\n",sum);
    }
    return 0;
}
