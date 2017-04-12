#include <iostream>
#include <cstring>
using namespace std;

void check (char name1[100], char name2[100])
{
    int m,l,k,i,j,ara[100],length1,length2;
    char vowel[]={'a','e','i','o','u'},cons[100];

    length1=strlen(name1);
    length2=strlen(name2);
    if(length1!=length2){
        cout<<"No"<<endl;
    }
    else{
            j=0;;
            k=0;
            m=0;
        for(i=0;i<length1;i++){
            if(name1[i]=='a' || name1[i]=='e' || name1[i]=='i' || name1[i]=='o' || name1[i]=='u'){
                k++;
                ara[k-1]=i;
            }
            else{
                j++;
                if(name1[i]==name2[i]){
                    m++;
                }
            }
        }
        if(m!=j){
            cout<<"No"<<endl;
        }

        else{
                l=0;
                for(i=0;i<k;i++){
                    if(name2[ara[i]]=='a' || name2[ara[i]]=='e' || name2[ara[i]]=='i' || name2[ara[i]]=='o' || name2[ara[i]]=='u' ){
                            l++;
                    }
                }
                if(l==k){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
        }
    }

}

int main()
{
    char name1[100],name2[100];
    int i,j,test;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>name1>>name2;
        check(name1,name2);
    }

    return 0;
}
