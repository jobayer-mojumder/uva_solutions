#include <stdio.h>
int main()
{
    char ch,c;
    long int i=0;
    while(scanf("%c",&ch)==1){
        if(ch=='"'){
            i++;
            if(i%2==1){
                printf("``");
            }
            else if(i%2==0){
                printf("''");
            }
        }
        else{
            printf("%c",ch);
        }
    }

    return 0;
}
