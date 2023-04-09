 
#include<bits/stdc++.h> /// this for only contest time for fast
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
//using namespace __gnu_pbds;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
///usings
using ll = long long;
using ld = long double;
using ull = unsigned long long int;
 
 
vector < ll > a;
vector < ll > b;
ll ch(vector < ll > &a, ll i)
{
 
    auto it = find(a.begin(), a.end(), i);
    if(it != a.end())
        return 1;
    if(it == a.end())
        return -1;
}
int main()
{
    //FIO;
    ll n, k; cin >> n >> k; ll cnt = 0;
 
 
   while(n--)
   {
       ll x, y; cin >> x >> y;
       for(ll i = x; i <= y; i++)
       {
           a.push_back(i);
       }
   }
 
 
 
 
   for(ll i = 1; i <= k; i++)
   {
 
      ll d = ch(a, i);
      if(d == -1) {
           cnt++;
           b.push_back(i);
 
       }
 
 
   }
 
   if(cnt == 0)
   {
       cout << 0 << '\n';
   }
   if(cnt)
   {
       cout << cnt << '\n';
       for(auto i : b)
       {
           cout << i << ' ';
       }
       cout << '\n';
   }
 
 
 
    
     ///timeStamp;
    return 0;
 
}