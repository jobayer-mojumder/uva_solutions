#include <stdio.h>
int main(){

    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if((a>=0 && a<=1) && (b>=0 && b<=1) && (c>=0 && c<=1)){
            if(a==b && b!=c){
                printf("C\n");
            }
            else if(b==c && c!=a){
                printf("A\n");
            }
            else if(c==a && a!=b){
                printf("B\n");
            }
            else {
                printf("*\n");
            }
        }
    }

    return 0;
}
