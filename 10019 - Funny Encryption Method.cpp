#include <iostream>
using namespace std;
int hex(int n)
{
    int s,c=0;
    while(n!=0){
        s=n%10;
        n=n/10;
    if(s==0)
        c+=0;
    else if(s==1 || s==2 || s==4 || s==8)
        c+=1;
    else if(s==3 || s==5 || s==6 || s==9)
        c+=2;
    else if(s==7)
        c+=3;
    }
    return c;
}
int binary (int num)
{
    int rem,i=1,sum,k=0;
    while(num > 0){
        rem=num%2;
        k=k+rem;
        num=num/2;
    }
    return k;
}

int main()
{
    int test,n,a,b;
    cin>>test;
    for(int i=0;i<test;i++){
        cin>>n;
        a=binary(n);
        b=hex(n);
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
