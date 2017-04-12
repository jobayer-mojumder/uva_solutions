#include <iostream>
using namespace std;

int main()
{
    int s,a[100],test,n,i,j,k;
    cin>>test;
    for(i=1;i<=test;i++){
        cin>>n;
        s=0;
        for(j=0;j<n;j++){
            cin>>a[j];
            if(a[j]>=s){
                s=a[j];
            }
        }
        cout<<"Case "<<i<<": "<<s<<endl;

    }

    return 0;
}
