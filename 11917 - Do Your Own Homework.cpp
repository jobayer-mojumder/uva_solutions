#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int index,n,ara[10],j,i,test,day,y=0;
    char sub[20][120],s[20];
    cin>>test;
    for(int k=1;k<=test;k++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>sub[i];
            cin>>ara[i];
        }
        cin>>day;
        cin>>s;
        y=0;
        for(i=0;i<n;i++){
            if(strcmp(sub[i],s)==0){
                y=1;
                index=i;
                break;
            }
        }
        if(y==1){
            if(ara[index]<=day){
                cout<<"Case "<<k<<": Yesss"<<endl;
            }
            else if(ara[index]<=day+5){
                cout<<"Case "<<k<<": Late"<<endl;
            }
            else{
                cout<<"Case "<<k<<": Do your own homework!"<<endl;
            }
        }
        else{
            cout<<"Case "<<k<<": Do your own homework!"<<endl;
        }
    }
    return 0;
}
