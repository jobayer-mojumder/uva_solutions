#include <stdio.h>
int main()
{
    int i,test;
    double first,second,total,a,b,z,diff,add;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%lf%lf%lf",&a,&b,&z);
        diff=a-b;
        add=a+b;
        first=(z/add)*a;
        second=(z/add)*diff;
        total=first+second;
        printf("%.lf\n",total);
    }

    return 0;
}
