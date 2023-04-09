#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
vector < ll > v;
set < ll > st;
int main()
{
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ll n; cin >> n;
    string s; cin >> s;
    for(ll i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
           v.push_back(i);
        }
    }
    for(ll i = 0; i < v.size() - 1; i++)
    {
        st.insert(v[i] - v[i + 1]);
    }
    cout <<  ((st.size() == 1) ? "YES" : "NO" );
}