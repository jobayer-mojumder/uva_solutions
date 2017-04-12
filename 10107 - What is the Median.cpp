#include <iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long ara[10000]={0},n,s,k,i=0;
    while(scanf("%lld",&n)!=EOF){
        ara[i]=n;
        sort(ara,ara+i+1);
        if(i%2==0){
            cout<<ara[i/2]<<endl;
        }
        else{
            k=i/2;
            cout<<(ara[k]+ara[k+1])/2<<endl;
        }

        i++;
    }
    return 0;
}
