#include <stdio.h>
#include <string.h>
int main()
{
    int test,i,j,length=0;
    char a[5];
    scanf("%d",&test);
    for(j=0;j<test;j++){
        scanf("%s",&a);
        length=0;

        if(strlen(a)==5){
            printf("3\n");
        }

        else{
            if(a[0]=='o')
                length++;
            if(a[1]=='n')
                length++;
            if(a[2]=='e')
                length++;
            if(length>=2){
                printf("1\n");
            }
            else{
                printf("2\n");
            }

        }
    }

    return 0;
}

