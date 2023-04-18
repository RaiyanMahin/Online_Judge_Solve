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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define p_case(r)  cout << "Case #" << r++ << ": "
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
//ll MOD = 1000000007;
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


bool checkBit(ll n, ll i) { return (n&(1LL<<i)); }
ll setBit(ll n, ll i) { return (n|(1LL<<i)); }
ll resetBit(ll n, ll i) { return (n&(~(1LL<<i))); }


/*  ll ans = accumulate(a.begin(), a.end(), 1LL , multiplies <ll > ()); */

// Important Functions

///degree angle
double deg(double x) {  return ( (180.0 * x) / PI ); }

/// radian return
double rad(double x) { return (( x * (double)PI ) / (180.0) ); }
const ll MOD = 998244353;

ll toInt(string s){ ll  sm ; stringstream ss(s); ss >> sm; return sm;}
ll Ceil(ll a, ll b) {  return (a + b - 1) / b; } // a large, b small
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
//inline ll normal(ll a) { a %= MOD; (a < 0) && (a += MOD); return a; }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }



map < ll, ll > mp;

vector < ll > a;
vector < pair < ll, ll > > vp;

void baal()
{
    mp.clear(); a.clear(); vp.clear();

    ll n; cin >> n;

    ll op = 1;

    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;

        if(!mp.count(x))
        {
            mp[x] = op;
            a.push_back(op);
            op++;
        }
        else if(mp.count(x))
        {
            ll ache = mp[x];
            a.push_back(ache);

        }
    }
    if(!is_sorted(all(a)))
    {
        cout << "IMPOSSIBLE\n"; return;
    }

    for(auto i : mp)
    {
        vp.push_back({i.S, i.F});

    }
    sort(all(vp));
    for(auto i : vp)
    {
        cout << i.S << ' ';
    }
    cout << nn; return;

    
  



    
    


    return;

}


int main()
{

   ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
   
   
   
   ll t, r = 1; cin >> t; //sf("%lld", &t);
   while(t--)
    {
        p_case(r);
        baal();
    }
}