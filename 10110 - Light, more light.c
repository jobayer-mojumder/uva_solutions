#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int a,b,c;
    while(scanf("%d",&a)!=EOF && a>0){
        b=sqrt(a);
        c=b*b;
        if(c==a){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
