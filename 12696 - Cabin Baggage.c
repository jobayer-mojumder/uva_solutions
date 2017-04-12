#include <stdio.h>
int main()
{
    double width,weight,length,depth,sum;
    int i,test,n;
    scanf("%d",&test);
    n=0;
    for(i=1;i<=test;i++){
        scanf("%lf%lf%lf%lf",&length,&width,&depth,&weight);

        if(((length<=56 && width<=45 && depth<=25) ||(length+width+depth)<=125) && weight<=7){
            printf("1\n");
            n++;
        }
        else{
            printf("0\n");
        }
    }
    printf("%d\n",n);

    return 0;
}
