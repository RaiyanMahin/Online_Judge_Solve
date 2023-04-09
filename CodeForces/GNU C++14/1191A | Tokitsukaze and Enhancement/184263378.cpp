#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int x,a;
    cin>>x;
    char s[]={'A','B','C','D'};
    int w[]={0,1,2,3,4};
    if(x%4==1){
        printf("%d %c\n",w[0],s[0]);
    }
    if(x%4==2){
        printf("%d %c\n",w[1],s[1]);
    }
    if(x%4==3){
        printf("%d %c\n",w[2],s[0]);
    }
    if(x%4==0){
        printf("%d %c\n",w[1],s[0]);
    }
 
}