#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll s, p; cin >> s >> p; vector < ll > a;
    for(ll i = 1; i * i <= p; i++)
    {
        if(i * (s - i) == p)
            return cout << "Yes", 0;

    }
    return cout << "No", 0;


}




