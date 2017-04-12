#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000],s[1000];
    int i,j,k,test,len;
    while(cin.getline(str,sizeof(str))){
        len=strlen(str);
        for(i=0;i<len;i++){
                j=0;
            while(str[i]!=' ' && i<len){
                s[j]=str[i];
                j++;
                i++;
            }
            for(k=j-1;k>=0;k--){
                cout<<s[k];
            }
        if(i<len)
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
