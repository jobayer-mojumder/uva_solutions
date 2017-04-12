#include <stdio.h>
int main()
{
    double total,ava,sum,c,k;
    char percent='%';
    int test,i,j,array[1001];
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%lf",&k);
        array[0]=0;
        sum=0;
        for(j=0;j<k;j++){
            scanf("%d",&array[j]);
            sum=sum+array[j];
        }
        ava=sum/k;
        c=0;
        for(j=0;j<k;j++){
            if(array[j]>ava){
                c++;
            }
        }
        total=c/k;
        printf("%.3lf%c\n",total*100,percent);
    }

    return 0;
}
