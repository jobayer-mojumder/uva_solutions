#include <stdio.h>
int main()
{
    int total[1001],number,i,test=1,treat;
    while(1){
        scanf("%d",&number);
        if (number==0)
            break;
        else{
        treat=0;
        for(i=0;i<number;i++){
            scanf("%d",&total[i]);
            if(total[i]==0){
                treat--;
            }
            else treat++;
        }
        printf("Case %d: %d\n",test,treat);
        test++;
        }
    }
    return 0;
}
