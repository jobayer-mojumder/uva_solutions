#include <stdio.h>
int main()
{
    int sum1,sum2,x,k,n,test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d%d%d",&n,&k,&x);
        sum1=n*(1+n)/2;
        sum2=k*((2*x)+(k-1))/2;
        printf("Case %d: %d\n",i,sum1-sum2);
    }

    return 0;
}
