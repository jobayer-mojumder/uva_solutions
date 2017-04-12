#include <stdio.h>
int main(){
    long long int s,range, num,step,i=0,j;
    while(scanf("%lld%lld",&num,&range)!=EOF && num>0 && range>0 ){
        i++;
        step=0;
        s=num;
        while(num<=range){
                step++;
            if(num==1){
                break;
            }
            else if(num%2==0){
                num=num/2;
                continue;
            }
            else{
                num=(3*num)+1;
            }

        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,s,range,step);
    }

    return 0;
}
