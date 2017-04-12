#include <iostream>
#include <algorithm>
using namespace std;
long int test,arr[2000000];
int main()
{
    int i,n;
    while((cin>>test) && test){
        for(i=0;i<test;i++){
            cin>>arr[i];
        }
        sort(arr,arr+test);
        for(i=0;i<test;i++){
            cout<<arr[i];
        if(i<test-1){
            cout<<" ";
            }
        else{
            cout<<endl;
            }
        }
    }

    return 0;
}
