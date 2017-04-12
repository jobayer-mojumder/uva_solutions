#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,test,result;
    while((cin>>a>>b>>c>>d)){
        if(a==0 && b==0 && c==0 && d==0)
            break;
        else{
            result=1080;
            if(a<b)
                result+=(40-b+a)*9;
            else
                result+=(a-b)*9;
            if(b>c)
                result+=(40-b+c)*9;
            else
                result+=(c-b)*9;
            if(c<d)
                result+=(40-d+c)*9;
            else
                result+=(c-d)*9;
            cout<<result<<endl;
        }
    }

    return 0;
}
