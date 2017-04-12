#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int t,sum,i,j,k,l;
    char c,s[100];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        l=strlen(s);
        sum=0;
        for(j=0,k=1;j<l;j++){
            if(s[j]=='O'){
                sum=sum+k;
                k++;
            }
            else{
                k=1;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
