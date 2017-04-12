
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int i,t,j,k;
    cin>>t;
    string name[100];
    string song[]={"Happy", "birthday","to", "you","Happy","birthday", "to", "you","Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    for(i=0;i<t;i++){
        cin>>name[i];
    }
    if(t<=16){
        for(i=0,j=0;j<t,i<16;i++,j++){
            if(j==t){
                j=0;
            }
            cout<<name[j]<<": "<<song[i]<<endl;
        }
    }
    else if(t>16){
            k=0;
        for(i=0,j=0;;i++,j++){
            if(k>=t && i==16){
                break;
            }
            else{
                k++;
                if(j==t){
                    j=0;
                }

                if(i==16){
                    i=0;
                }
                cout<<name[j]<<": "<<song[i]<<endl;
            }
        }
    }

    return 0;
}
