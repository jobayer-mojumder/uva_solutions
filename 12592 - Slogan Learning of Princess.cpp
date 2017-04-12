#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    string a[100],b[100],r;
    int i,j,k,t;
    while(cin>>t){
        getchar();
        for(i=0;i<t;i++){
            getline(cin,a[i]);
            getline(cin,b[i]);
        }
        cin>>k;
        getchar();
        while(k--){
            getline(cin,r);
            for(i=0;i<100;i++){
                if(r==a[i]){
                    cout<<b[i]<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
