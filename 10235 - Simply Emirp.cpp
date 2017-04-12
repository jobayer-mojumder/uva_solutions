#include <iostream>
#include <cmath>

using namespace std;

int prime(int n){
    int i;
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(i=3;i*i<=n;i+=2){
        if(n%i==0){
             return 0;
        }
    }
    return 1;
}

int numReverse(int n){
    int rev=0,rem=0;
    while (n!=0){
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
   }
   return rev;
}

int main()
{
    int n,i,j,pri,emp,rev,imp;
    while(cin>>n){
        if(n<1 || n>1000000){
            return 0;
        }
        else{
             pri=0,emp=0,rev=0;
             pri=prime(n);
             rev=numReverse(n);
             emp=prime(rev);
            if(pri!=1){
             cout<<n<<" is not prime."<<endl;
            }
            else if(pri==1 && emp!=1){
                cout<<n<<" is prime."<<endl;
            }
            else if(pri==1 && emp==1){
                cout<<n<<" is emirp."<<endl;
            }
        }
    }
    return 0;
}
