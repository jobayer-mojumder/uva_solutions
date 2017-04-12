#include <iostream>
using namespace std;
long long numReverse(long long num)
{
    long long n,rem=0,rev=0;
    n=num;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int palindrome(long long m){
    long long rem=0,rev=0,n;
    n=m;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(m==rev){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    long long test,num,i,j,k,rev;
    int p;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>num;
        j=num;
        k=1;
        p=0;
        while(num>0){
            rev=j+numReverse(j);
            p=palindrome(rev);
            if(p==1){
                cout<<k<<" "<<rev<<endl;
                break;
            }
            else{
                j=rev;
                k++;
            }
        }
    }

    return 0;
}
