#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s, t; cin >> s >> t;
    ll S = 0, T = 0;
    for(char i : s)
    {
        S += (i - '0');
    }
    for(char i : t)
    {
        T += (i - '0');
    }
    cout << max(T , S);













}
