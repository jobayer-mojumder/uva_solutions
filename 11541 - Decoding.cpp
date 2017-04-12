#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
using namespace std;
int main(){

    char str[205],c;
    int test,num,i,j=0,k=0,l=0,s=0,len=0,p=0;
    cin>>test;
    for(i=1;i<=test;i++){
        cin>>str;
        cout<<"Case "<<i<<": ";
        len=strlen(str);
        for(j=0;j<len;j++){
            c=str[j];
            s=0;
            if(str[j]>='A' && str[j]<='z'){
                for(k=j+1;k<len;k++){
                    if(str[k]>='0' && str[k]<='9'){
                        s=(s*10);
                        s+=str[k]-'0';
                    }
                    else{
                        j++;
                        break;
                    }

                }
            }
            for(p=1;p<=s;p++){
                    cout<<c;
            }
        }
        cout<<endl;
    }

    return 0;
}
