#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,sum_char,sum_num,i,k,t=0,m;
    char ch[9];
    cin>>t;
    getchar();
    while(t--){
        gets (ch);
        sum_char=0;
        a=(ch[0]-65)*(pow(26,2));
        b=(ch[1]-65)*(pow(26,1));
        c=(ch[2]-65)*(pow(26,0));
        sum_char=a+b+c;
        sum_num=0;
        for(i=4;i<8;i++){
            sum_num=sum_num*10+(ch[i]-'0');
        }

        if(sum_char>sum_num){
            m=sum_char-sum_num;
        }
        else{
            m=sum_num-sum_char;
        }
        if(m<=100){
            printf("nice\n");
        }
        else{
            printf("not nice\n");
        }
    }
    return 0;
}

