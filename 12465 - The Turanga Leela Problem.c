#include <stdio.h>
#include <math.h>
int main()
{
    int ans,i,j;
    long int a,b,c;
    while(scanf("%ld%ld",&a,&b)==2 && a>0 && b>0){
        c=a-b;
        if(c<0){
            c=c*(-1);
        }
        ans=0;
        int k =sqrt(c);
        for(i=1;i<=k;i++){
            if(c%i==0){
                ans=ans+2;
            }
        }
        if(k*k==c)
            ans--;
        printf("%d\n",ans);
    }

    return 0;
}
