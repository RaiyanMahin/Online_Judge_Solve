#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{  ll n; cin>>n; ll a[n];
     for(ll i=0;i<n;i++)
     {
         cin>> a[i];
         if(a[i]%2==0)
         {
             a[i]--;
         }
         cout<<a[i]<<" ";
     }
}