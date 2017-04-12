#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int p,num,c,ara[100],i,j,k,n;
    while(scanf("%d %d",&num,&c)==2 && num>0){
        ara[0]=1;
        ara[1]=2;
        n=2;
        p=2;
        for(i=3;i<=num;i++){
            k=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    k++;
                    break;
                }
            }
            if(k==0){
                n++;
                ara[p]=i;
                p++;
            }
        }
        int l=n/2;
        cout<<num<<" "<<c<<" : ";
        for(i=l-c;i<=2*c;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
