#include <stdio.h>
int main()
{
    int k,move=0,i,array[1000],temp=0,y,n,x,num,test;
    scanf("%d",&test);
    for(k=1;k<=test;k++){
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&array[i]);
        }
        move=0;
        for(x=0; x<num; x++){
            for(y=0; y<num-1; y++){
                if(array[y]>array[y+1]){
                    temp = array[y+1];
                    array[y+1] = array[y];
                    array[y] = temp;
                    move++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",move);
    }
    return 0;
}
