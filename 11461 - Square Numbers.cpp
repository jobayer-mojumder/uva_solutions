#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,root,i,j,c,k=1;
    while(k++){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        else{
                c=0;
            for(i=a;i<=b;i++){
                root=sqrt(i);
                if(root*root==i){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
