#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
map < char , ll > mp;
void baal()
{
    mp.clear();
    ll n; cin >> n; string s; cin >> s;
    if(n & 1)
    {
        cout << "NO\n"; return;
    }
    for(char i : s)
        mp[i]++;
    ll od = 0;
    for(auto i : mp)
    {
        ll p = i.second, q = i.first;
      //  cout << q << ' ' << p << endl;
        if(p & 1)
        {
            od++;
            break;
        }
    }
    cout << (od ? "NO" : "YES") << endl; return;





    return;









}

int main()
{
    ll t; cin >> t;

    while(t--)

    {

        baal();
    }




}



