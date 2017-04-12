#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int ara[3000],ara2[3000],num,i,j,k,l,s=0;
    while(cin>>num){
        s=0;
        for(i=0;i<num;i++){
            cin>>ara[i];
        }
        for(i=0;i<num-1;i++){
            ara2[i]=abs(ara[i+1]-ara[i]);
        }
        sort(ara2,ara2+i);
        for(i=1;i<num;i++){
            if(ara2[i]==ara2[i-1]){
                s++;
                break;
            }
        }
        if(s>0){
            cout<<"Not jolly"<<endl;
        }
        else{
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
