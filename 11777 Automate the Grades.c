#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    double t1,t2,f,a,b1,b2;
    int i,j,test,array[3],k;
    double total,ava;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%lf%lf%lf%lf",&t1,&t2,&f,&a);
        for(k=0;k<3;k++){
            scanf("%d",&array[k]);
        }
        qsort(array, 3, sizeof(int), cmpfunc);
        ava=(array[2]+array[1])/2;
        total=t1+t2+f+a+ava;

        if(total>=90){
            printf("Case %d: A\n",i);
        }
        else if(total>=80){
            printf("Case %d: B\n",i);
        }
        else if(total>=70){
            printf("Case %d: C\n",i);
        }
        else if(total>=60){
            printf("Case %d: D\n",i);
        }
        else{
            printf("Case %d: F\n",i);
        }
    }

    return 0;
}
