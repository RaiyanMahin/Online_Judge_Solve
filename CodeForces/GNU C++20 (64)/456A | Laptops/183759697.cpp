#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll f;
int main()
{
    ll n; cin >> n;
    while(n--)
    {
        ll a,b; 
        cin >> a >> b;
        if(a < b || b < a)
        {
            f = 1;
        }
 
 
 
    }
     cout <<  (  (f == 1) ? "Happy Alex" : "Poor Alex" ) << '\n';
}