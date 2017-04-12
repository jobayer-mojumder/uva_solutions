#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int p,h,o,s;
    while(scanf("%d%d%d",&p,&h,&o)!=EOF && p>=0 && p<=5 && h>=1 && h<=5 && o>=1 && o<=10 ){

        s=o-p;
        if(s>=h){
            cout<<"Props win!"<<endl;
        }
        else{
            cout<<"Hunters win!"<<endl;
        }
    }

    return 0;
}
