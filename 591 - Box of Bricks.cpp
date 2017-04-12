#include <iostream>
using namespace std;
int main()
{
    int n,box[100],i,j=1,ans,ava,s;
    while(cin>>n){
        ans=0,ava=0,s=0;
        if(n==0){
            break;
        }
        else{
            for(i=0;i<n;i++){
                cin>>box[i];
            }
            for(i=0;i<n;i++){
                s=s+box[i];
            }
            ava=s/n;
            for(i=0;i<n;i++){
                if(box[i]>ava){
                    ans=ans+(box[i]-ava);
                }
            }
            cout<<"Set #"<<j<<endl;
            cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
            j++;
        }
    }

    return 0;
}
