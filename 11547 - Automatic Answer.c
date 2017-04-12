#include <stdio.h>
#include <string.h>
int main()
{
    int number,test,sum,i,m,n;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&number);

        sum=number*315+36962;

        m=sum/10;
        n=m%10;
        if(n<0){
            n=n/-1;
        }
        printf("%d\n",n);
    }

    return 0;
}
