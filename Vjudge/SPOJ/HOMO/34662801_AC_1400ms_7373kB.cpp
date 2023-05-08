#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using ll = long long ;
using ld = long double;
using ull = unsigned long long int;

// Defines

#define pf printf
#define sf scanf
#define F first
#define S second
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a * b) / ( __gcd(a, b ) )
#define pb emplace_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p_case(r)  cout << "Case " << r++ << ": "
#define all(a) a.begin(), a.end()
#define Sort sort(a.begin(), a.end())


// typedefs

typedef pair < ll ,ll > pll;
typedef pair < ld, ld > pld;


// Constants

ll MOD = 1000000007;
ll inf = 1e18;
const double PI = acos(-1);
const double eps = 1e-9;

/*  DEBUG */

#define debug(x) cerr << # x << ' ' << x << endl;

/*     */



/*******************  ---------------      END OF TEMPLATE --------------      *************************/



unordered_map < ll , ll > mp;

void baal()
{
    ll n; cin >> n; ll cnt = 0;
    for(ll i = 1; i <= n; i++)
    {
        ll a = 0, b = 0;
        string s; cin >> s; ll x;
        if(s == "insert")
        {
            cin >> x;
            cnt++;
            mp[x]++;

        }
        else
        {
            cin >> x;
            //cnt--;
            if(mp[x])
            {
                mp[x]--; cnt--;
            }
            if(mp[x] == 0)
            {
                mp.erase(x);
            }


        }

        ll sz = (ll)mp.size();
        if(sz >= 2)
            b = 1;
        if(cnt > sz)
            a = 1;

        if(a and b)cout << "both\n";
        else if(a and !b)cout << "homo\n";
        else if(!a and b)cout << "hetero\n";
        else cout << "neither\n";
    }




















    return;

}

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(nullptr);
    ll t = 1; //sf("%lld", &t);
    while(t--)
        baal();
}
