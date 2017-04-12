#include <stdio.h>
#include <string.h>
void palindrome(char a[1000], int k){
    char b[1000];
    int l,i,j,s;
    for(i=0,j=k-1;i<k,j>=0;i++,j--){
        b[i]=a[j];
    }
    s=0;
    for(i=0;i<k;i++){
        if(a[i]==b[i]){
            s++;
        }
        else
            s--;
    }
    if(s==k){
        printf("You won't be eaten!\n");
    }
    else{
        printf("Uh oh..\n");
    }
}
int main()
{
    char s[1000],t[1000];
    int length,i,j,k=0,l;
    while(1){
        gets(s);
        if(strcmp(s,"DONE")==0)
            return 0;
            k=0;
                length=strlen(s);
                for(i=0;i<length;i++){
                    if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
                        if(s[i]>=90 && s[i]<=122 ){
                            t[k]=s[i]-32;
                            k++;
                        }
                        else{
                            t[k]=s[i];
                            k++;
                        }
                    }
                }
                    t[k]='\0';
                palindrome(t,k);
    }
    return 0;
}
