#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m=30000,median,sum,d,ara[30000],l,i,j,k,n,test;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>ara[j];
            sort(ara,ara+j+1);
        }
        median=ara[n/2];
        sum=0;
        for(l=0;l<n;l++){
            d=median-ara[l];
            if(d<=0){
                d=d*-1;
                sum+=d;
            }
            else{
                sum+=d;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
