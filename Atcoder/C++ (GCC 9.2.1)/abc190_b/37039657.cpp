#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n , s , d; cin >> n >> s >> d;
    ll ans = 0;
    while(n--)
    {
        ll x,  y; cin >> x >> y;
        if(x < s and y > d)
        {
            ans = 1;
        }


    }
    if(ans)
    {
        yes;
        return 0;
    }
    no;
}



