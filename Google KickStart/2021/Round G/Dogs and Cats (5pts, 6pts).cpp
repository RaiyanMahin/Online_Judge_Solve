#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using ll = long long;
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




void baal()
{
    ll n, d , c, m; cin >> n >> d >> c >> m; string s; cin >> s;

    ll ans = 0, cd = 0;

    for(ll i = 0; i < n; i++)
    {
        if(s[i] == 'D')
            cd++;
    }
    if(cd > d and cd )
    {
        no; return;
    }
    if(cd == 0)
    {
        yes; return;
    }
    ll cc = 0;

    for(ll i = 0; i < n; i++)
    {
        if(s[i] == 'D')
        {

           c += m; cc++;

        }
        else if(s[i] == 'C')
        {
            //debug(c)
            if(c <= 0)
            {
                if(cc != cd)
                {
                    ans = 1; break;
                }
                //ans = 1; break;
            }
            else if(c > 0)
            {
                c--;
            }

        }


    }
    ans == 1 ? no : yes; return;




















}



int main()
{
    //FIO;
    ll t; sf("%lld", &t); ll r = 1;
    while(t--)
    {
        cout << "Case " << "#" << r++ << ": " ;
        baal();
    }
}
