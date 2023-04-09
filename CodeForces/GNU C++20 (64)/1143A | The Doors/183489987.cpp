#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector < ll > a, b;
int main()
{
    string s = "";
    char c;
    ll n; cin >> n;
    while(n--)
    {
        cin >> c;
        s += c;
    }
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
            a.push_back(i + 1);
        if(s[i] == '0')
            b.push_back(i + 1);
    }
    ll d = *max_element(a.begin(), a.end());
    ll d1 = *max_element(b.begin(), b.end());
    cout << min(d,d1);
 
 
}