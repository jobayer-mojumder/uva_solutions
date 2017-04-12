#include <stdio.h>
unsigned long factorial(unsigned long n)
{
    if(n==0)
        return 1;
    else
        return(n*factorial(n-1));
}
int main()
{
    int num;
    unsigned long f,sum;
    while(scanf("%d",&num)!=EOF){
        sum=0;
        f=0;
        f=factorial(num-2);
        sum=num*(num-1)*f;
        if(num==0 || num<=7){
            printf("Underflow!\n");
        }
        else if(num>13){
            printf("Overflow!\n");
        }
        else if(sum>=10000 && sum<=6227020800){
            printf("%u\n",sum);
        }
    }
    return 0;
}
