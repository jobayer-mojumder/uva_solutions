#include <iostream>
using namespace std;
int main()
{
    int num,test,duration,j,juice,mile;
    cin>>test;
    for(int i=1;i<=test;i++){
        cin>>num;
        mile=0,juice=0;
        for(int k=0;k<num;k++){
            cin>>duration;
            mile=mile+((duration/30)+1)*10;
            juice=juice+((duration/60)+1)*15;
        }
        if(mile>juice){
            cout<<"Case "<<i<<": Juice "<<juice<<endl;
        }
        else if(mile<juice){
            cout<<"Case "<<i<<": Mile "<<mile<<endl;
        }
        else if(mile==juice){
            cout<<"Case "<<i<<": Mile Juice "<<juice<<endl;
        }
    }

    return 0;
}
