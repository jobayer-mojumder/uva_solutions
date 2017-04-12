#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int check(char c[100],char ch){
    int i,k;
    k=0;
    for(i=0;c[i]!='\0';i++){
        if(c[i]==ch){
            k++;
            break;
        }
        else{
            k=0;
        }
    }
    return k;
}
int main()
{
    int i,j,k,m,l,p;
    char c[100],s;
    char str [100][20]={0};
    i=0;
    for(i=0;i<100;i++){
        scanf("%s",str[i]);
        if(str[i][0]=='#')
            break;
    }
    p=0;
    for(j=0;j<20;j++){
        for(k=0;k<i;k++){
            s=str[k][j];
            if(s>='A' && s<='Z'){
                l=check(c,s);
                if(l==0){
                    c[p]=s;
                    p++;
                }
            }
        }
    }
    for(i=0;i<p;i++){
        printf("%c",c[i]);
    }
    printf("\n");
    return 0;
}
