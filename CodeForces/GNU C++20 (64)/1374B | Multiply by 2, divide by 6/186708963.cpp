///****In the name of ALLAH, most Gracious, most Compassionate****///
///BISMILLAHIR_RAHMANIR_RAHIM
// template will be updated
#include <bits/stdc++.h> /// this is only for contest time
 
 
using namespace std;
//using namespace __gnu_pbds;  ///policy_based_data_structure
//https://www.geeksforgeeks.org/policy-based-data-structures-g/
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
 
 
///typedefs
typedef pair < ll ,ll > pll;
typedef pair < ld, ld > pld;
 
 
///constants
ll MOD = 1000000007;
ll BMOD = 1e18;
const double PI = acos(-1);
const double eps = 1e-9;
 
///ALGO + TACTICS START
 
 
//baal
 
 
/// basic_prime checker
bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(ll i = 5 ; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
 
}
///make_string
/*
 string s = to_string(s);
*/
 
/// bigmod algo
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M) % M) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M) % M;
        return (tmp * tmp) % M;
    }
 
}
/***
/// BUILTIN FUNCTIONS OF GCC COMPILER
__builtin_popcount(x) == for setbits of any number
__builtin_parity(x) == return true if number has odd parity , else return 0 if number has even parity
__builtin_clz(x) == count the leading zeros of int64_t. before the 1st occurrence of 1 (set bit)
***/
 
 
/// gcd
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
/// bubble sort
/* void bubbleSort(ll arr[], ll n)
{
 
    for (ll i = 0; i < n-1; i++)
      for (ll j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            //swap(arr[j], arr[j+1]);
} */
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
///leap year
bool lp(int y)
{
    if(y % 400 == 0)
        return true;
    if(y % 400 != 0) {
        if(y % 100 != 0 and y % 4 == 0)
            return true;
        else return false;
    }
}
 
 
int main(  int argc, char const *argv[] )
{
    //FIO;
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll c1 = 0 ,  c2 = 0, c3 = 0;
        while(n % 6 == 0)
        {
            n /= 6;
            c1++;
        }
        while(n % 3 == 0)
        {
            n /= 3;
            c2++;
        }
        if(n != 1)
        {
            //cout << "baal " << -1 << '\n';
            cout << -1 << '\n';
        }
        if(n == 1)
        {
            //cout << "cnt 6 " <<  c1 << ' ' << "cnt 3 " << c2 << '\n';
            cout << c1 + c2 * 2 << '\n';
        }
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
    ///timeStamp;
    ///return 0;
 
}