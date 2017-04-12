#include <stdio.h>
#include <math.h>
int main()
{
    int t, test;
    double a, b, c, s, area;
    double A, B, C;
    scanf("%d", &test);
    t=0;
    while(t!=test)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        if(a<=0 || b<=0 || c<=0)
        {
            printf("These are invalid inputs!\n");
            t++;
            continue;
        }
        A=(1/a);
        B=(1/b);
        C=(1/c);
        s=(A+B+C)*(B+C-A)*(A-B+C)*(A+B-C);
        if(s<0)
        {
            printf("These are invalid inputs!\n");
            t++;
        }
        else
        {
            area=(1/s);
            printf("%0.3lf\n", sqrt(area));
        }
    }
    return 0;
}
