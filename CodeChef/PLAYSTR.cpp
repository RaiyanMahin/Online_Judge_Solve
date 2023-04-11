#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n; cin >> n; string s, t; cin >> s >> t;
    ll a = 0, b = 0, c = 0, d = 0;
    for(char i : s)
    {
        if(i == '0')
            a++;
        else
            b++;
    }
    for(char i : t)
    {
        if(i == '0')
            c++;
        else
            d++;
    }
    if(a == c and b == d)
    {
        cout << "YES\n"; return;
    }
    cout << "NO\n"; return;










































    return;

}

int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}

