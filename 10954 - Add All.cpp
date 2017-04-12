#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long s,ara[100000],ara2[100000],i,j,k,num,sum;
    while(cin>>num && num>0){
            sum=0;
        if(num==1){
            cin>>k;
            cout<<k<<endl;
        }
        else{
            for(i=0;i<num;i++){
                cin>>ara[i];
            }
            sort(ara,ara+(num-1));
            sum=ara[0];
            for(i=1;i<num;i++){
                sum+=ara[i];
                ara2[i-1]=sum;
            }
            s=0;
            for(j=0;j<i-1;j++){
                s=s+ara2[j];
            }
            cout<<s<<endl;
        }
    }

    return 0;
}
