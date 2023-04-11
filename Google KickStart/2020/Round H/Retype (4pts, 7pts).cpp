#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
vector < ll > a,b;
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll n , k , s; cin >> n >> k >> s;
        ll A = ( k - 1) + (n + 1);
        ll B = ( k - 1) + ( k - s) + ( n - s ) + 1;
        cout << "Case " << "#" << r++ << ": " << min(A , B) << endl;


    }
}
