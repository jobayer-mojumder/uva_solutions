#include <iostream>
using namespace std;
int main()
{
    long long n,sum;
    while((cin>>n) && n>=0 ){
        sum=(n*(n+1))/2+1;
        cout<<sum<<endl;
    }

    return 0;
}
