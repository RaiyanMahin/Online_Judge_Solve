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
#define Rev_sort(a) reverse(a.begin(), a.end())
#define RSort(a) sort(a.rbegin(), a.rend()) // sort by descending
#define mem(a, b) memset(a, b, sizeof(a) )
#define acum(a , init_value) accumulate(ALL(a),init_value) // 0LL
#define setpre(x) cout << fixed << setprecision(x)
#define loop(i, b, n) for(ll i = b; i <= n; i++)
#define rev_loop(i, b, n) for(ll i = b; i >= n; i--)
#define odd(n) ((n)&1)
#define even(n) (!((n)&1))

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

//int fx[]={1, -1, 0, 0}; int fy[]={0, 0, 1, -1};
//int fx[]={0, 0, 1, -1, -1, 1, -1, 1}; int fy[]={-1, 1, 0, 0, 1, 1, -1, -1};

/*
bool checkBit(int n, int i) { return (n&(1<<i)); }
int setBit(int n, int i) { return (n|(1<<i)); }
int resetBit(int n, int i) { return (n&(~(1<<i))); }
*/

/*  ll ans = accumulate(a.begin(), a.end(), 1LL , multiplies <ll > ()); */

// Important Functions

ll toInt(string s){ ll  sm ; stringstream ss(s); ss >> sm; return sm;}
ll Ceil(ll a, ll b) {  return (a + b - 1) / b; } // a large, b small
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
//inline ll normal(ll a) { a %= MOD; (a < 0) && (a += MOD); return a; }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
inline bool isSquare(ll x) 				{ ll s = sqrt(x);	return (s*s==x); }
inline bool isFib(ll x) 				{ return isSquare(5*x*x+4)|| isSquare(5*x*x-4); }
inline bool isPowerOfTwo(ll x)			{ return ((1LL<<(ll)log2(x))==x); }

/*    */

/*     STRING
       size_t found = s.find(i);
       if(found == string::npos)
*/

/*     for(; i<n ; j<n , i+=2 , j+=2)
*/
bool isAlphaNumeric(char x) {
    if(65<=x && x<=90)          //Capitals
        return 1;
    else if(97<=x && x<=122)    //Small
        return 1;
    else if(48<=x && x<=57)     //Numbers
        return 1;
    else
        return 0;
}
/*    STRING transform()
lower to uppercase()
transform(s.begin(), s.end(), s.begin(), ::toupper);
aaa -> AAA

transform(s.begin(), s.end(), s.begin(), ::tolower);
AAA ->  aaa */

string WithOut_Gap_New_String(string str)
{
    stringstream ss(str);
    string temp;
    str = "";
    while(getline(ss, temp , ' '))
    {
        str = str + temp;
    }

    return str;
}

/*******************  ---------------      END OF TEMPLATE --------------      *************************/

ll getMSB(ll n)
{
    for(ll i = 29; i >= 0; i--)
    {
        if( (n >> i) & 1 )
            return i;
    }
    //return -1;
}

////cout << bitset<8>(n).to_string()
//
//string toBinary(ll n)
//{
//    string r;
//    while (n != 0){
//        r += ( n % 2 == 0 ? "0" : "1" );
//        n /= 2;
//    }
//    return r;
//}
//
//ll g_ch(string s, string t)
//{
//    ll k = 0, k1 = (ll)s.size(), k2 = (ll)t.size();
//
//    if(k1 < k2)
//    {
//        ll bb = k2 - k1;
//
//        while(bb--) s += '0';
//
//        //debug(s)
//    }
//
//    for(ll i = 0; i < (ll)t.size(); i++)
//    {
//        if(s[i] != t[i]) k++;
//    }
//    return k;
//
//
//}
//
//vector < string > vs;

void baal()
{
    ll n, m ,k; cin >> n >> m >> k;  vector < ll > a(m + 1, 0);
    for(auto &i : a) cin >> i;
    ll b = a.back(); a.pop_back();

//    ll K; cin >> K;
//    for(ll i = 30; i >= 0; i--)
//    {
//        ll k = ((K >> i) & 1 );
//        debug(k)
//    }
    ll ans = 0, FFT = 0;
    for(ll i = 0; i < (ll)a.size(); i++)
    {
        ll cur = a[i];
        ll k1 = 0, k2 = 0;
        ans = 0;
        for(ll bit = 30; bit >= 0; bit--)
        {
            k1 = ((cur >> bit) & 1);
            k2 = ((b >> bit) & 1);
            ans += abs(k2 - k1);

        }
        debug(ans)
        if(ans <= k) FFT++;
    }
    cout << FFT; return;













//    ll cnt[30] = {0};
//    ll n; cin >> n; vector < ll > a(n , 0);
//    for(auto &i : a) cin >> i;











































    return;

}

int main()
{

    ios_base::sync_with_stdio(false); cin.tie(0);
//    ll t; cin >> t;
//    while(t--)
        baal();

}
