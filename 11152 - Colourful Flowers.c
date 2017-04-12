#include <stdio.h>
#include <math.h>
#define PI acos(-1)
int main()
{
    double s,a,b,c,p,radius,sCircle,bCircle,tringle;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        s=(a+b+c)/2;
        tringle=sqrt(s*(s-a)*(s-b)*(s-c));
        sCircle=tringle/s;
        radius=(a*b*c)/(4*tringle);
        bCircle=PI*radius*radius;
        printf("%.4lf %.4lf %.4lf\n",bCircle-tringle,tringle-(PI*sCircle*sCircle),PI*sCircle*sCircle);
    }
    return 0;
}
