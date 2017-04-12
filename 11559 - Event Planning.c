#include <stdio.h>
int main()
{
    int part,budget,hotel,week,room,bed,i,j,price,total,cost=100000000;
    while(scanf("%d%d%d%d",&part,&budget,&hotel,&week)==4){
       for(i=1;i<=hotel;i++){
            scanf("%d",&price);
            for(j=1;j<=week;j++){
                scanf("%d",&room);
                if(room>=part){
                    total=price*part;
                    if(total<cost){
                        cost=total;
                    }
                }
            }
       }
       if(cost<=budget){
        printf("%d\n",cost);
       }
       else{
        printf("stay home\n");
       }
        cost=100000000;
    }

    return 0;
}
