#include <stdio.h>
void sum(int array [500], int test)
{
    int res,x,y,temp,i,s=0;
    for(x=0; x<test; x++){
        for(y=0; y<test-1; y++){
            if(array[y]<array[y+1]){
                temp = array[y+1];
                array[y+1] = array[y];
                array[y] = temp;
                }
            }
        }
        s=0;
        for(i=0;i<test;i++){
            s+=array[i];
        }
        s=s/test;
        res=0;
        for(i=0;i<test;i++){
            if(s>=array[i]){
                res+=s-array[i];
            }
            else{
                res+=array[i]-s;
            }
        }
        printf("%d\n",res);
}
int main()
{
    int ara[500],i,j,k,s,n,test;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&n);
        if(n==1){
            printf("0\n");
        }
        else{
            for(j=0;j<n;j++){
                scanf("%d",&ara[j]);
            }
            sum(ara,n);
        }
    }
    return 0;
}
