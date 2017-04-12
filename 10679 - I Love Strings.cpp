#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

int subString(char str1[100000], char str2[1000]){
    int l=0;
    l=strlen(str2);
    int i,j;
    for(i=0,j=0;str1[i] !='\0' && str2[j] !='\0';i++){
        if(str1[i]==str2[j]){
            j++;
        }
        else{
            j = 0;
        }
    }
    if(j==l){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char str1[100000], str2[1000];
    int sub=0,test,i,j,k,num;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>str1;
        cin>>num;
        for(j=0;j<num;j++){
            sub=0;
            cin>>str2;
            sub=subString(str1,str2);
            if(sub==1){
                cout<<"y"<<endl;
            }
            else{
                cout<<"n"<<endl;
            }
        }
    }
    return 0;
}
