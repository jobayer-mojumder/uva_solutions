#include <stdio.h>
int main()
{
    int test,num,road[100],max,min,i,j,result;
    scanf("%d",&test);
    for(j=1;j<=test;j++){
        max=0,min=100;
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&road[i]);
            if(road[i]>max){
                max=road[i];
            }
            if(road[i]<min){
                min=road[i];
            }
        }
        result=(max-min)*2;
        printf("%d\n",result);
    }

    return 0;
}
