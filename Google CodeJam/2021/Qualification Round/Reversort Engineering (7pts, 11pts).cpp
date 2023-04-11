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

vector < ll > a;

ll Ans(vector < ll > a, ll n)
{
    ll ans = 0, i = 0, j = 0, indx = 0, mn = INT_MAX;
    for(i = 0; i < (n - 1); i++)
    {
        mn = INT_MAX;
        for(j = i; j < n; j++)
        {
            if(a[j] < mn)
            {
                mn = a[j];
                indx = j;
            }
        }

       // debug(indx)
        ans += (indx - i + 1);
       // debug(ans)

        //debug(a[indx])

        //reverse(a + j, a + indx);
        ll st = i, en = indx;
        //debug(st) debug(en)
           while(st < en)
           {
               ll op = a[st];
               a[st] = a[en];
               a[en] = op;
               st++;
               en--;
           }

//        cout << " test str \n";
//        for(ll i = 0; i < n; i++)
//            cout << a[i] << ' ';
//
//
//        cout << " \n test stop \n";
    }
    return ans;

}

void baal()
{
   // for(ll i = 0; i < 200; i++) a[i] = 0;
   a.clear();
    ll n, cost; cin >> n >> cost;
    
    if(cost == (n  - 1))
    {
        for(ll i = 1; i <= n; i++)
            cout << i << ' ';
        cout << endl; return;
    }
    for(ll i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    //ll N = (ll)a.size();
    string ANS = "IMPOSSIBLE";
    while(next_permutation( all(a)  )  )
    {
        ll get_ans = Ans(a, n);
       // debug(get_ans)

        if(get_ans == cost)
        {
            for(ll i : a)
                cout << i << ' ';

            cout << endl;

            ANS = "GOT";
            return;

        }
    }
    cout << ANS << endl; return;




    //cout << " ff " << ans << endl; return;


























    return;

}

int main()
{

   ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        p_case(r);
        baal();
    }

}
