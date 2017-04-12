#include <iostream>
#include <cstdio>
#include <cstring>
//#include <iomanip>
using namespace std;

int check(char name[100])
{
    int i,j,k,l,s;
    l=strlen(name);
    s=0;
    k=0;
    for(i=0;i<l;i++){
        if(name[i]>='A' && name[i]<='Z'){
            k=(name[i]-64);
            s=s+k;
        }
        else if(name[i]>='a' && name[i]<='z'){
            k=(name[i]-96);
            s=s+k;
        }
    }
    cout<<"S= "<<s<<endl;
    return s;
}
double number(int num)
{
    int i,j,k;
    double s=0;
    while(num>0){
        s+=num%10;
        num=num/10;
    }
    cout<<" num = "<<s<<endl;
    return s;
}
int main()
{
    char name1[100],name2[100];
    int s1,s2;
    double m,n1,n2;
    while(gets(name1) && gets(name2)){
        s1=check(name1);
        s2=check(name2);
        n1=number(s1);
        n2=number(s2);
        m=0;
        if(n1>=n2){
            m=(n2/n1)*100;
            //cout<<fixed <<setprecision(2);
            cout<<m<<" %"<<endl;
        }
        else{
            m=(n1/n2)*100;
            //cout<<fixed <<setprecision(2);
            cout<<m<<" %"<<endl;
        }

    }
    return 0;
}
