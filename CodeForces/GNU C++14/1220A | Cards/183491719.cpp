#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
typedef long long ll;
#define max 1000000
 
int main()
{
    FIO;
     int i,j=0,b[100000];
    int n; cin>>n;
    char s[n + 1]; cin>>s;
    //int i,j,b[10000];
    for(i=0;i<n;i++){
        if(s[i]=='n') { b[j]=1; j++;}
        if(s[i]=='z') {b[j]=0;j++;}
    }
    sort(b,b+j);
    for(int k=j-1;k>=0;k--){
        cout<<b[k]<<" ";
    }
 
 
 
 
 
 
 
 
}