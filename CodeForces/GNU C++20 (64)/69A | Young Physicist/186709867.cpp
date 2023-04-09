#include<stdio.h>
int main()
{
   int n,i,x,y,z,s=0,r=0,t=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    scanf("%d%d%d",&x,&y,&z);
    s+=x;
    r+=y;
    t+=z;
   }
    if(s==0 && r==0 && t==0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
 
 
}