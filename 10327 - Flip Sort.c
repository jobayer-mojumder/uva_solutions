#include <stdio.h>
int main()
{
    int move=0,i,array[1000],temp=0,y,n,x,test;
    while(scanf("%d",&test)!=EOF){
        for(i=0;i<test;i++){
            scanf("%d",&array[i]);
        }
        move=0;
        for(x=0; x<test; x++){
            for(y=0; y<test-1; y++){
                if(array[y]>array[y+1]){
                    temp = array[y+1];
                    array[y+1] = array[y];
                    array[y] = temp;
                    move++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",move);
    }
    return 0;
}
