#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
 
// https://codeforces.com/contest/1473/submission/105785786
 
 
void baal()
{
    ll n , k; cin >> n >> k;
   
        for(ll i = 1; i < 2 * k - n; i++)
            cout << i << ' ';
        for(ll i = k; i >= 2 * k - n; i--)
            cout << i << ' ';
        cout << endl;
        return;
    
}
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
    }
}
 
 
 
 