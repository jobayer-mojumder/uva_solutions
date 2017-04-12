#include <iostream>
#include <map>
using namespace std;
int main()
{
    long long sum,n1,n2,i,j,k,l;
    map<long, long>m;
    while(cin>>n1>>n2 && n1>0 && n2>0){
        for(i=0;i<n1;i++){
            cin>>k;
            m[k]=1;
        }
        sum=0;
        for(j=0;j<n2;j++){
            cin>>l;
            if(m[l]==1){
                sum++;
            }
        }
        m.clear();
        cout<<sum<<endl;
    }

    return 0;
}
