#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1;
    while(cin>>a>>b>>c>>d>>e){
        cin>>a1>>b1>>c1>>d1>>e1;
        if((a!=a1) && (b!=b1) && (c!=c1) && (d!=d1) && (e!=e1)){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }

    return 0;
}
