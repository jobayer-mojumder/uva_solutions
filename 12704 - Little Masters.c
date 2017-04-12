#include <stdio.h>
#include <math.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    while(n--){
        float x=0,y=0,r=0;
        scanf("%f %f %f",&x,&y,&r);
        double s=sqrt(x*x+y*y);
        printf("%.2f %.2f\n",r-s,r+s);
    }
    return 0;
}
