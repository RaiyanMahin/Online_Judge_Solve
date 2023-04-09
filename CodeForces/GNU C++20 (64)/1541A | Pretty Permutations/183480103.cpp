///****In the name of ALLAH, most Gracious, most Compassionate****///
///BISMILLAHIR_RAHMANIR_RAHIM
 
#include <bits/stdc++.h>
using namespace std;
 
//#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
///usings
using ll = long long;
using ld = long double;
using ull = unsigned long long int;
 
///defines
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
#define mp make_pair
#define popb pop_back
#define ALL(a) (a.begin(), a.end())
#define SS sort(a.begin(), a.end())
#define RESS(a) reverse(a.begin(), a.end())
#define REDSS(a) sort(a.rbegin(), a.rend()) // sort by descending
#define mem(a, b) memset(a, b, sizeof(a) )
#define acum(a , init_value) accumulate(ALL(a),init_value) // 0LL
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
///bit_using
/*
bool checkBit(ll n, ll i)
{
    return (n & (1 << i));
}
ll setBit(ll n, ll i)
{
    return (n | (1 << i));
}
ll resetBit(ll n, ll i)
{
    return (n & (~(1 << i)));
} */
 
///typedefs
typedef pair < ll ,ll > pll;
typedef pair < ld, ld > pld;
 
 
///constants
ll MOD = 1000000007;
ll BMOD = 1e18;
const double PI = acos(-1);
const double eps = 1e-9;
 
///recursive binary_search
ll b_search(ll a[] , ll l, ll r, ll x)
{
    if(r >= l)
    {
        ll mid = l + (r - l);
        mid = mid >> 1;
        if(a[mid] == x)
            return mid;
        if(a[mid] > x)
        {
            return b_search(a, l ,mid - 1, x);
        }
        return b_search(a, mid + 1, r, x);
 
    }
    return -1;
}
void solve()
{
    ll n; cin >> n;
    if(n & 1)
    {
         vector < ll > ans;
        for(ll i = 2; i <= (n - 1); i += 2)
        {
            ans.push_back(i);
            ll K = i - 1;
            ans.push_back(K);
        }
        ans.push_back(n);
        ll sz = ans.size();
        swap(ans[sz - 1], ans[sz - 2]);
        for(ll i : ans)
            cout << i << ' ';
        cout << endl;
        return;
 
 
    }
    if(n % 2 == 0)
    {
        vector < ll > ans;
        for(ll i = 2; i <= n; i += 2)
        {
            ans.push_back(i);
            ll K = i - 1;
            ans.push_back(K);
        }
        for(ll i : ans)
            cout << i << ' ';
        cout << endl;
        return;
 
    }
 
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
        solve();
 
}