#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int ara[1422],p=0,s,n,test,i,j,k;
    while(cin>>n){
        if(n!=0){

            for(i=0;i<n;i++){
                cin>>ara[i];
            }
            ara[n]=1422;
            p=0;
            sort(ara,ara+(n+1));
            p=ara[n]-ara[n-1];
            p=p*2;
            if(p>200){
                cout<<"IMPOSSIBLE"<<endl;
            }
            else{
                    s=0;
                    for(i=0;i<n;i++){
                        k=ara[i+1]-ara[i];
                        if(k>200){
                            s++;
                        }
                    //cout<<k<<" ";
                    }
                    for(i=n-1;i>=0;i--){
                        k=ara[i]-ara[i-1];
                        if(k>200){
                            s++;
                        }
                    //cout<<k<<" ";
                    }

                    if(s==0){
                        cout<<"POSSIBLE"<<endl;
                    }
                    else{
                        cout<<"IMPOSSIBLE"<<endl;
                    }
                }
            }

    else{
            return 0;
        }
    }

    return 0;
}
