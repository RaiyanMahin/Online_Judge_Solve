 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
           int n,m; cin>>n>>m; 
     cout<<min(n,m)<<" ";
     cout<<(max(n,m)-min(n,m))/2<<endl;
}