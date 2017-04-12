#include <iostream>
using namespace std;
int main()
{
    int i;
    double c1,result,f,inc,test;
    cin>>test;
    for(i=1;i<=test;i++){
        cin>>c1>>inc;
        f=((c1*9)/5)+32;
        f=f+inc;
        result=((f-32)*5/9);
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        cout<<"Case "<<i<<": "<<result<<endl;
    }

    return 0;
}
