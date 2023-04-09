 
#include<bits/stdc++.h>
typedef long long int ll;
//#define pb push_back
#define pii pair<int,int>
#define clear(a) memset(a, 0, sizeof(a))
using namespace std;
vector<ll>rm;
int main()
{
    ll n,s1=0,s2=0; cin >>n;
    for(ll i=0;i<n;i++)
    {
        ll x; scanf("%lld",&x);
        rm.push_back(x);
    }
    sort(rm.begin(),rm.end());
    reverse(rm.begin(),rm.end());
    ll z = (n + 1 ) / 2;
    for(ll i = 0 ; i < z ; i++)
    {
        s1 += rm[i];
    }
    for(ll i = z; i < n; i++)
    {
        s2 += rm[i];
    }
    cout << s1*s1 + s2*s2 << '\n';
}