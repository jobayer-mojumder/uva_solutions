#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long rem,num;
    int i,j;
    char s[1000];
    while(cin>>num && num>=0){
            i=0;
        while(num>0){
            rem=num%3;
            s[i]=rem+'0';
            num=num/3;
            i++;
        }
        if(i==0){
            cout<<"0";
        }
        else{
            for(j=i-1;j>=0;j--){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
