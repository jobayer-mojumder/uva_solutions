#include <stdio.h>
int prime(int n){
    int i,j,k=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            k++;
            break;
        }
    }
    if(k==0){
        return 1;
    }
    else{
        return 0;
    }
}
int reverse(int n){
    int x,y,sum=0;
    while(n>0){
        x=n%10;
        n=n/10;
        sum=(sum*10)+x;
    }
    return sum;
}
int main(){
    int num,i,j,k,p,emp,rev;
    while(scanf("%d",&num)!=EOF){
        k=0,p=0,emp=0,rev=0;
        p=prime(num);
        if(p==1){
            emp=reverse(num);
            k=prime(emp);
            if(k==1 && emp!=num){
                printf("%d is emirp.\n",num);
            }
            else{
                printf("%d is prime.\n",num);
            }
        }
        else{
            printf("%d is not prime.\n",num);
        }
    }
    return 0;
}
