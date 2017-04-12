#include <stdio.h>
void digitadd(long long n){
    long long r,i;
    int sum=0;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    if(sum<10){
        printf("%d\n",sum);
        return 0;
    }
    else{
        digitadd(sum);
    }
}
int main(){
    long long num;
    while(scanf("%lld",&num)!=EOF && num>0){
        digitadd(num);
    }
    return 0;
}
