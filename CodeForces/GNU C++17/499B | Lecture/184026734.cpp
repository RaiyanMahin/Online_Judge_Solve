 
#include <bits/stdc++.h> /// this is only for contest time
/*
rest all header files
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <bitset>
#include <set>
#include <list>
#include <string.h>
#include <iomanip>
#include <cstring>
#include <math.h>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>
#include <utility>
#include <cstdlib>
#include <climits>
#include <ext/ext/pb_ds/assoc_container.hpp> //Common file
#include <ext/pb_ds/ext/pb_ds/tree_policy.hpp> //Including
 
*/
using namespace std;
//using namespace __gnu_pbds;  ///policy_based_data_structure
 
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
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
#define NN "\n"
#define yes cout << "YES" << NN
#define no cout << "NO" << NN
#define p_case(r)  cout << "Case " << r++ << ":"
#define mp make_pair
#define popb pop_back
#define ALL(a) (a.begin(), a.end())
#define SS sort(a.begin(), a.end())
#define RESS(a) reverse(a.begin(), a.end())
#define REDSS(a) sort(a.rbegin(), a.rend()) // sort by descending
#define mem(a, b) memset(a, b, sizeof(a) )
#define acum(a , init_value) accumulate(ALL(a),init_value)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
///will define getchar(), gets, getline(), stable_sort, cin.ignore()
 
///clock
#define dbg(args...) do { cerr << #args << " : "; faltu(args); } while(0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
void faltu() {cerr << endl;}
 
///debug
#define vul(x) cout << "eta x " << x << NN
 
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
 
///ALGO + TACTICS START
 
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
 
///degree angle
double deg(double x) {  return ( (180.0 * x) / PI ); }
 
/// radian return
double rad(double x) { return (( x * (double)PI ) / (180.0) ); }
/// stream
ll toInt(string s){ll  sm ; stringstream ss(s); ss>> sm; return sm;} ///not_clear
///  /******IMPPP/// if n = 5; then mod can be upto 4 ex: 0 ,1,2,3,4 *****/
 
 
/// vector pair sorting compare
bool reversesort(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second > b.second);
}
 
 
/// basic_prime checker
 
 
vector < pair < string , string > > vp;
int main(  int argc, char const *argv[] )
{
    //O (1)
    //FIO;
 
    ll n , m; cin >> n >> m;
    while(m--)
    {
        string a ,b ; cin >> a >> b;
        vp.push_back({ a ,b  });
    }
    while(n--)
    {
        string s, ans = ""; cin >> s;
        for(auto i : vp)
        {
            string a_1 = i.first;
            string a_2 = i.second;
            ll x = a_1.size();
            ll y = a_2.size();
            if(a_1 == s)
            {
                if(x <= y)
                {
                    ans = a_1;
                    break;
                }
                if(x > y)
                {
                    ans = a_2;
                    break;
                }
 
 
            }
        }
        cout << ans << ' ';
    }
    cout << '\n';
 
}
 
 