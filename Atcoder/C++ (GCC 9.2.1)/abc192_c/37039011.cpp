#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a[100009];
ll to_int(string s)
{ ll  sm ;

  stringstream ss(s); ss>> sm; return sm;}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);


    ll n , k; cin >> n >> k;
    a[0] = n;
    for(ll i = 1; i <= k; i++)
    {
        ll p = a[i - 1];
        string s1 = to_string(p);
        sort(s1.begin(), s1.end());
        ll PP = to_int(s1);


        reverse(s1.begin(), s1.end());
        ll op = to_int(s1);

        a[i] = op - PP;
    }
    cout << a[k];






}
