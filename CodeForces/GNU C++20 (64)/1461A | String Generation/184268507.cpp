#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll TC; cin >> TC;
    while(TC--)
    {
        ll n , k; cin >> n >> k; string s = "", S = "abc";
        for(ll i  = 0; i < 334; i++)
        {
            s += S;
        }
        for(ll i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
 
    }
 
 
}