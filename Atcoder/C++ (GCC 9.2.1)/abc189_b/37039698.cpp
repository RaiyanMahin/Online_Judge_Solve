#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n"
//#define eps 1e-9
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    ld n , x , s = 0, uu = 0; cin >> n >> x;
    x *= 100.0;
    vector < ld > aa;
    ll cnt = 0;
   // setprecision(3333333333);
    while(n--)
    {
        long double a, b; cin >> a >> b;

        uu = (a * b);
        aa.push_back(uu);

        s += uu;



    }
    if((ll)s <= x)
        return cout << -1, 0;


    //sort(aa.begin(), aa.end());
    ld cc = 0, k = 0;
    for(ll i = 0; i < aa.size(); i++)
    {
        if(k > x)
            break;
        else if(k <= x)
        {
            k += aa[i];
            cc++;
        }

    }
    cout << (ll)cc;





}
