#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n , k; cin >> n >> k;
        if(n == k)
        {
            cout << "0\n";
        }
        if(k > n)
        {
            cout << (k - n) << '\n';
        }
        if(k < n)
        {
            if(n % 2 == k % 2)
            {
                cout << "0\n";
            }
            else
            {
                cout << "1\n";
            }
        }
    }
 
}
 
 
 