#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    long int decimal=0,i=0,rem=0,n,num;
    char binary[100];
    while(gets(binary)){
        n=strlen(binary);
        num=0,rem=0,decimal=0;
        for(i=0;i<n;i++){
            num=binary[i]-'0';
            rem=num%10;
            num=num/10;
            decimal=decimal+rem*(pow(2,n-i)-1);
        }
        if(decimal==0)
            break;
        printf("%ld\n",decimal);
    }


    return 0;
}
