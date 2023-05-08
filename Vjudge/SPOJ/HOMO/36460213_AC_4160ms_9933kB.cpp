#include <bits/stdc++.h>
using namespace std;
//using namespace __gnu_pbds;

#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

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
#define nn "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p_case(r)  cout << "Case " << r++ << ": "
#define all(a) a.begin(), a.end()
#define Sort sort(a.begin(), a.end())
#define Rev_sort(a) reverse(a.begin(), a.end())
#define RSort(a) sort(a.rbegin(), a.rend()) // sort by descending
#define mem(a, b) memset(a, b, sizeof(a) )
#define acum(a , init_value) accumulate(ALL(a),init_value) // 0LL
#define setpre(x) cout << fixed << setprecision(x)
#define loop(i, b, n) for(ll i = b; i <= n; i++)
#define rev_loop(i, b, n) for(ll i = b; i >= n; i--)
#define odd(n) ((n)&1)
#define even(n) (!((n)&1))
#define sz(x) (ll)x.size()


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

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

int fx[]={1, -1, 0, 0};
int fy[]={0, 0, 1, -1};
int dx[]={0, 0, 1, -1, -1, 1, -1, 1}; // diagonals with
int dy[]={-1, 1, 0, 0, 1, 1, -1, -1};

/*
bool checkBit(int n, int i) { return (n&(1<<i)); }
int setBit(int n, int i) { return (n|(1<<i)); }
int resetBit(int n, int i) { return (n&(~(1<<i))); }
*/

/*  ll ans = accumulate(a.begin(), a.end(), 1LL , multiplies <ll > ()); */

// Important Functions

///degree angle
double deg(double x) {  return ( (180.0 * x) / PI ); }

/// radian return
double rad(double x) { return (( x * (double)PI ) / (180.0) ); }



set < ll > st;

map < ll, ll > mp, mp22;


void baal()
{
   //st.clear();
     mp.clear(); mp22.clear();
    ll n; cin >> n;

    ll both = 0, homo = 0, hetero = 0, nei = 0, F = 0;

    for(ll i = 1; i <= n; i++)
    {
        both = 0, homo = 0, hetero = 0, nei = 0, F = 0;
        string s; cin >> s; ll x; cin >> x;
        if(s == "insert")
        {

            mp[x]++;
            if(mp[x] >= 2 and !mp22.count(x))
            {
                mp22[x] = mp[x];
            }

            else if(mp[x] >= 2 and mp22.count(x))
            {
                mp22[x]++;
            }

        }
        if(s == "delete")
        {
            if(mp.count(x))
            {
                mp[x]--;
                if(mp[x] == 0)
                {
                    mp.erase(x);
                }
            }
            if(mp22.count(x))
                {
                    mp22[x]--;
                    if(mp22[x] < 2)
                    {
                        mp22.erase(x);
                    }
                }









        }

        if(mp22.size() > 0)
                {
                    F = 1;
                }
       ll N = sz(mp); debug(N)
//
//        ll Map_sz = sz(mp22); debug(Map_sz)
//
//        cout << " cur mp 22 \n";
//        for(auto i : mp22)
//        {
//            cout << i.F << ' ' << i.S << nn;
//        }
//        cout << " \n ses map22 \n";
        if(N >= 2 and F  ) both = 1;
        if(N < 2 and  !F  ) nei = 1;

        if(N >= 2 and  !F) hetero = 1;

        if(N < 2 and F  ) homo = 1;



        if(both)
        {
            cout << "both\n";
        }

        if(homo and !hetero)
        {
            cout << "homo\n";
        }

        if(hetero and !homo)
        {
            cout << "hetero\n";
        }
        if(nei)
        {
            cout << "neither\n";
        }


    }


















    return;

}

int main()
{

   ios_base::sync_with_stdio(false); cin.tie(0);

   ll t = 1; //cin >> t; //sf("%lld", &t);
   while(t--)
        baal();

}

