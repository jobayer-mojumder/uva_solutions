#include <iostream>
using namespace std;
int main()
{
    int i,n,a[5],s=0;
    while(cin>>n && n<=4){
        for(i=0;i<5;i++){
            cin>>a[i];
        }
        s=0;
        for(i=0;i<5;i++){
            if(a[i]==n) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
