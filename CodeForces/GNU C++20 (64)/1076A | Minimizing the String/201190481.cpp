 
#include <bits/stdc++.h> 
 
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
#define p_case(r)  cout << "Case " << r++ << ": "
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
 
 
/// TEMPLATE_END
 
int main(  int argc, char const *argv[] )
{
    //FIO;
    ll n; cin >> n;
    string s , s1 = "", s2 = ""; cin >> s;
    ll pos = n - 1;
    for(ll i = 0; i < n - 1; i ++)
    {
        if(s[i] > s[i + 1])
        {
            pos = i;
            break;
        }
    }
    s2 = s.substr(0, pos);
    s1 = s.substr(pos + 1);
    cout << s2 << s1;
 
 
 
 
 
 
 
 
 
 
     ///timeStamp;
    return 0;
 
}
 
 