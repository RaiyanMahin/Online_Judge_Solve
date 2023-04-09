#include<stdio.h>
#include<string.h>
int main()
{
    char p[102];
    scanf("%s",p);
    int i;
    for(i=0;i<strlen(p);i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
                //flag=1;
            printf("YES\n");
            return 0;
        }
    }
 
 
 
        printf("NO\n");
    return 0;
 
}