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
inline bool isSquare(ll x)     { ll s = sqrt(x); return (s*s==x); }
inline bool isFib(ll x)     { return isSquare(5*x*x+4)|| isSquare(5*x*x-4); }
//inline bool isPowerOfTwo(ll x)   { return ((1LL<<(ll)log2(x))==x); }
inline bool isPowerOfTwo(ll x)   { return (( x & (x - 1)) == 0 )  ; }
// if((number & (number - 1)) == 0)
 
 
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
 
/***
/// BUILTIN FUNCTIONS OF GCC COMPILER
__builtin_popcount(x) == for setbits of any number
__builtin_parity(x) == return true if number has odd parity , else return 0 if number has even parity
__builtin_clz(x) == count the leading zeros of int64_t. before the 1st occurrence of 1 (set bit)
***/
 
 
/***   string er sob substring  ***/   // VERY IMPORTANT
/* n = s.size();
 for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
 
*/
 
/*
prefix sum algo
array a khali , a te fill up krbo array b use kore
START:
a[0] = b[0];
for(ll i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + b[i];
    }
sesh prefix sum completed !!
 
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
 
/// sum and product of each digit of a number
/*
summation
while(n != 0)
    {
        s += n % 10;
        n /= 10;
 
    }
    return s;
product
while(m != 0)
    {
        p = p * (m % 10);
        m /= 10;
    }
return p;
*/
 
/// last digit of any number = n % 10;
 
/// vector pair sorting compare
bool reversesort(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second > b.second);
}
 
/// bubble sort
/* void bubbleSort(ll arr[], ll n)
{
 
    for (ll i = 0; i < n-1; i++)
      for (ll j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            //swap(arr[j], arr[j+1]);
} */
 
bool isprime(ll n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(even(n) and n > 2) return false;
    // n odd n > 1
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
 
 
/*******************  ---------------      END OF TEMPLATE --------------      *************************/
 
ll TEMPLATE()
{
    /// 1. n array size, then array input
 
    /// 2. n string size, then string input
 
    /// 3. only string, then size
 
    /// 4. nn menas "\n";
 
    /**
    ll n; cin >> n; vector < ll > a(n , 0);
    for(ll &i : a) cin >> i;
 
 
    ll n; cin >> n; string s; cin >> s;
 
    string s; cin >> s; ll n = sz(s);
 
    cout << endl; return;
 
    **/
}
 
void baal()
{
          string a, s; cin >> a >> s;
    string a2 = a;
 
    ll n_a = sz(a), n_s = sz(s);
 
    if(n_a < n_s)
    {
        ll baki = (n_s - n_a);
        for(ll i = 1; i <= baki; i++)
        {
            a = "0" + a;
        }
        //debug(a)
    }
 
 
 
 
    string b = "";
 
    ll i = sz(a) - 1, j = sz(s) - 1, F = 0;
 
    for( ; i >= 0 and j >= 0; i--, j--)
    {
        char A = a[i], B = s[j];
 
        if(A > B)
        {
            // op1 a, op2 s
            string op2 = "";
 
 
            op2 += s[j]; //op2 += s[j - 1]; j--;
            if(j > 0)
            {
                op2 += s[j - 1]; j--;
            }
 
            reverse(all(op2));
 
            //cout << " a > b \n";
             debug(op2)
 
            ll num1 = (A - '0'), num2 = toInt(op2);
            //debug(num1) debug(num2)
            ll J = (num2 - num1);
 
            if(num2 < num1)
            {
                cout << "-1\n"; return;
            }
 
            if(J > 9)
            {
                cout << "-1\n"; return;
            }
 
            string K = to_string(J);
            //debug(K)
 
            b += K;
            //debug(b)
        }
 
 
        if(A <= B)
        {
            // op1 a, op2 s
//            string op1 = "", op2 = "";
//            op1 += a[i];
//
//            op2 += s[j];
//            //cout << " a <= b \n";
//            debug(op1) debug(op2)
            ll num1 =  (A - '0'), num2 =  (B - '0' );
            //debug(num1) debug(num2)
 
            ll J = (num2 - num1);
 
            string K = to_string(J);
 
            b += K;
           // debug(b) debug(K)
 
 
 
        }
 
    }
    reverse(all(b));
    //cout << " final b \n";
    debug(b)
 
   /* ll Fb = toInt(b); debug(dif)
 
    if(Fb > dif)
    {
        cout << "-1\n"; return;
    }
            ll In = -1;
        for(ll i = 0; i < sz(b); i++)
        {
            if(b[i] != '0')
            {
                In = i; break;
            }
        }
        for(ll i = In; i < sz(b); i++) cout << b[i];
 
        cout << nn; return; */
 
    if(sz(b) < sz(a2))
    {
        ll baki = (sz(a2) - sz(b));
        for(ll i = 1; i <= baki; i++)
        {
            b = "0" + b;
        }
        debug(b)
    }
    if(sz(b) > sz(a2))
    {
        ll baki = (sz(b) - sz(a2));
        for(ll i = 1; i <= baki; i++)
        {
            a2 = "0" + a2;
        }
        debug(a2)
    }
 
 
    string ss = "";
 
    i = sz(a2) - 1, j = sz(b) - 1;
 
    for(; i >= 0 and j >= 0; i--, j--)
    {
        ll num1 = (a2[i] - '0')  ; ll num2 = (b[j] - '0');
        ll Op = num1 + num2;
 
        string Tmp = "";
        Tmp = to_string(Op);
 
        if(Op >= 10)
            reverse(all(Tmp));
 
        ss += Tmp;
 
 
 
    }
    reverse(all(ss)); debug(ss)
 
 
    if(ss != s)
    {
        cout << "-1\n"; return;
    }
    if(ss == s)
    {
        ll In = -1;
        for(ll i = 0; i < sz(b); i++)
        {
            if(b[i] != '0')
            {
                In = i; break;
            }
        }
        for(ll i = In; i < sz(b); i++) cout << b[i];
 
        cout << nn; return;
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//    cout << " s \n";
//    for(ll i : a) cout << i << ' ';
//
//    cout << " \n ff \n";
//
//
//    for(auto i : mp)
//    {
//        cout << i.F << ' ' << i.S << nn;
//    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
int main()
{
 
   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
   ll t; cin >> t; //sf("%lld", &t);
   while(t--)
        baal();
 
}
 