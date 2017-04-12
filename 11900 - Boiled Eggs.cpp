#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int sum,num,i,j,k,p,q,n,test, ara[35];
    cin>>test;
    for(i=1;i<=test;i++){
        cin>>n>>p>>q;
        for(j=0;j<n;j++){
            cin>>ara[j];
        }
        sort(ara,ara+n);
        num=0;
        sum=0;
        for(k=0;k<n;k++){
            if((sum+=ara[k])>q || num+1>p){
                break;
            }
            else{
                num++;
            }
        }
        cout<<"Case "<<i<<": "<<num<<endl;
    }
    return 0;
}
