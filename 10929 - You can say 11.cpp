#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
    char a[1000];
    int l,j;
    long long n;
    while(gets(a)){
        if(strcmp(a,"0")==0)
            return 0;

        else{
            n=atoi(a);
            l=strlen(a);
            if(n%11==0){
                for(j=0;j<l;j++){
                    if(a[j]>='0' && a[j]<='9')
                        cout<<a[j];
                }
                cout<<" is a multiple of 11."<<endl;
            }
            else{
                for(j=0;j<l;j++){
                    if(a[j]>='0' && a[j]<='9')
                        cout<<a[j];
                }
                cout<<" is not a multiple of 11."<<endl;
            }
        }
    }
    return 0;
}
