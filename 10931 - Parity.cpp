#include <iostream>
using namespace std;

int main()
{
    int mod,c,sum,rem,dec,i,k,l,j,n;
    int a[31];
    while((cin>>n) && n){
        c=0;
        for(i=0; ;i++){
            mod=n%2;
            if(mod==1)
                c++;
            a[i]=mod;
            if(n==0)
                break;
            n=n/2;

        }
        cout<<"The parity of ";
        for(j=i-1; j>=0; j--)
            cout<<a[j];
        cout<<" is "<<c<<" (mod 2)."<<endl;
    }
    return 0;
}
