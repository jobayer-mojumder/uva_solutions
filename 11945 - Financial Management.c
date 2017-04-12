#include <stdio.h>
int main()
{
    double dif,dollar, result;
    int test,rem,i,j;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
            result=0.00;
        for(j=1;j<=12;j++){
            scanf("%lf",&dollar);
            result=result+dollar;
        }
        result=result/12.00;
        if(result<1000){
            printf("%d $%.2lf\n",i,result);
        }
        else{
            rem=result/1000.00;
            dif=result-(rem*1000);
            printf("%d $%d,%.2lf\n",i,rem,dif);
        }
    }

    return 0;
}
