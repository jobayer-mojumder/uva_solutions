#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int carry,c;

    while(cin>>a>>b){
        if(a==0 && b==0)
            return 0;
        else{
            carry=0,c=0;
            while(a>0 || b>0){
                carry=(a%10+b%10+carry)/10;
                a=a/10;
                b=b/10;
                if(carry) c++;
            }
            if(c==0){
                cout<<"No carry operation."<<endl;
            }
            else if(c==1){
                cout<<c<<" carry operation."<<endl;
            }
            else if(c>1){
                cout<<c<<" carry operations."<<endl;
            }
        }
    }

    return 0;
}
