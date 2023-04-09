#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
           int n,m; cin>>n>>m; int a[n],s=0;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]<=m) s+=1;
         else s+=2;
     }
     cout<<s<<endl;
}