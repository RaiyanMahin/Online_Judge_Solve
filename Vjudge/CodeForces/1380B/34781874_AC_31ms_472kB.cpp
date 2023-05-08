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

//ll ch(string s, string t)
//{
//    ll c = 0, op = (ll)s.size();
//    for(ll i = 0; i < (ll)s.size(); i++)
//    {
//        if(s[i] == t[i])
//            c++;
//    }
//    return abs(op - c);
//}


void baal()
{
    string s; cin >> s; ll sz = (ll)s.size();
    ll c1 = count(all(s), 'R'), c2 = count(all(s), 'P'), c3 = count(all(s), 'S');
    if(c1 > c2 and c1 > c3)
    {
        string ss(sz, 'P');
        cout << ss << endl; return;
    }
    if(c2 > c1 and c2 > c3)
    {
        string ss(sz, 'S');
        cout << ss << endl; return;
    }
    if(c3 > c2 and c3 > c1)
    {
        string ss(sz, 'R');
        cout << ss << endl; return;
    }
    ll mx = max({c1,c2,c3});
    if(mx == c1)
    {
        string ss(sz, 'P');
        cout << ss << endl; return;

    }
    if(mx == c2)
    {
        string ss(sz, 'S');
        cout << ss << endl; return;

    }
    if(mx == c3)
    {
        string ss(sz, 'R');
        cout << ss << endl; return;

    }















//    ll n; cin >> n; vector < ll > a(n , 0); ll s = 0;
//    for(auto &i : a)
//    {
//        cin >> i; s += i;
//    }
//    if(odd(s))
//    {
//        no; return;
//    }
//    sort(all(a));
//    for(ll i = n - 1; i >= 1; i--)
//    {
//        ll o1 = a[i], o2 = a[i - 1];
//        ll mn = min(o1, o2);
//        a[i] -= mn; a[i - 1] -= mn;
//        if(a[i] > a[i - 1])
//        {
//            swap(a[i], a[i - 1]);
//        }
//    }
//    cout << " tst ";
//    for(ll i : a)
//        cout << i << ' ';
//    cout << " \n";
//    ll op = 0;
//    for(ll i : a)
//    {
//        if(i != 0)
//        {
//            op = 1; break;
//        }
//    }
//    (op ? no : yes) ;
//    return;






























    return;

}

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(nullptr);
    ll t; sf("%lld", &t);
    while(t--)
        baal();
}
