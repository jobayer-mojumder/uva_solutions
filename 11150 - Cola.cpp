#include <iostream>
using namespace std;

int main()
{
    int n;
    while((cin>>n) && n>0 && n<201){
        cout<<n+n/2<<endl;
    }
    return 0;
}
