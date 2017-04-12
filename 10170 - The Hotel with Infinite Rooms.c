#include <stdio.h>
int main()
{
    long member,day,i,j,k,temp;
    while(scanf("%ld%ld",&member,&day)==2){
        temp=0;
        for(j=member;;j++){
            temp=temp+j;
            if(temp>day || temp==day){
                printf("%ld\n",j);
                break;
            }
        }
    }
    return 0;
}
