#include <iostream>
using namespace std;
int main()
{
    int ara1[1000],ara2[1000];
    int i,j,k,test,num;
    char s[1000];
    cin>>test;
    for(i=0;i<test;i++){
        cin>>num;
        for(j=0;j<num;j++){
            cin>>ara1[j];
        }
        for(j=0;j<num;j++){
            cin>>ara2[j];
        }
        for(j=0;j<num;j++){
            if(ara1[j]==0){
                s[j]=' ';
            }
            else if(ara1[j]==1){
                if(ara2[j]==1){
                    s[j]='.';
                }
                else if(ara2[j]==2){
                    s[j]=',';
                }
                else if (ara2[j]==3){
                    s[j]='?';
                }
                else if (ara2[j]==4){
                    s[j]='"';
                }
            }
            else if(ara1[j]==2){
                if(ara2[j]==1){
                    s[j]='a';
                }
                else if(ara2[j]==2){
                    s[j]='b';
                }
                else if (ara2[j]==3){
                    s[j]='c';
                }
            }
            else if(ara1[j]==3){
                if(ara2[j]==1){
                    s[j]='d';
                }
                else if(ara2[j]==2){
                    s[j]='e';
                }
                else if (ara2[j]==3){
                    s[j]='f';
                }
            }
            else if(ara1[j]==4){
                if(ara2[j]==1){
                    s[j]='g';
                }
                else if(ara2[j]==2){
                    s[j]='h';
                }
                else if (ara2[j]==3){
                    s[j]='i';
                }
            }
            else if(ara1[j]==5){
                if(ara2[j]==1){
                    s[j]='j';
                }
                else if(ara2[j]==2){
                    s[j]='k';
                }
                else if (ara2[j]==3){
                    s[j]='l';
                }
            }
            else if(ara1[j]==6){
                if(ara2[j]==1){
                    s[j]='m';
                }
                else if(ara2[j]==2){
                    s[j]='n';
                }
                else if (ara2[j]==3){
                    s[j]='o';
                }
            }
            else if(ara1[j]==7){
                if(ara2[j]==1){
                    s[j]='p';
                }
                else if(ara2[j]==2){
                    s[j]='q';
                }
                else if (ara2[j]==3){
                    s[j]='r';
                }
                else if (ara2[j]==4){
                    s[j]='s';
                }
            }
            else if(ara1[j]==8){
                if(ara2[j]==1){
                    s[j]='t';
                }
                else if(ara2[j]==2){
                    s[j]='u';
                }
                else if (ara2[j]==3){
                    s[j]='v';
                }
            }
            else if(ara1[j]==9){
                if(ara2[j]==1){
                    s[j]='w';
                }
                else if(ara2[j]==2){
                    s[j]='x';
                }
                else if (ara2[j]==3){
                    s[j]='y';
                }
                else if (ara2[j]==4){
                    s[j]='z';
                }
            }
        }
        for(j=0;j<num;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
