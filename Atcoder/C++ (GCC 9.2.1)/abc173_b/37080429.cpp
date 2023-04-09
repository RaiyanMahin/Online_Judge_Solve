#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    map < string, ll > mp;
    ll n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        mp[s]++;

    }
    cout << "AC x " << mp["AC"] << '\n';
    cout << "WA x " << mp["WA"] << '\n';
    cout << "TLE x " << mp["TLE"] << '\n';
    cout << "RE x " << mp["RE"] << '\n';
}


