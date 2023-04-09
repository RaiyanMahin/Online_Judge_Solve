#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
void baal()
{
    ll n; cin >> n; string s, s1 = ""; cin >> s; s1 = s;
    sort(s1.begin(), s1.end());
    ll c = 0;
    for(ll i = 0; i < n; i++)
    {
        if(s[i] != s1[i])
            c++;
    }
    cout << c << endl;
 
}
 
int main()
{
    ll t; cin >> t;
 
    while(t--)
 
    {
 
        baal();
    }
 
 
 
 
}