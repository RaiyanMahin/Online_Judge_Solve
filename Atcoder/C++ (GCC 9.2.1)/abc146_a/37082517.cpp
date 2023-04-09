
#include<bits/stdc++.h>
#include<iterator>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define M 7
using namespace std;
typedef unsigned long long int ll;
ll bigmod(ll n, ll k)
{
    if(k == 0) return 1;
    ll re = bigmod(n,k/2);
    re = (re * re) ;
    if(k % 2) re  = (re * n);
    //cout<<re<<endl;
    return re;
}
int main()
{

  string s;
  cin >> s;
 if(s == "SAT") cout << 1 << '\n';
  if(s == "SUN") cout << 7 << '\n';
   if(s == "MON") cout << 6 << '\n';
    if(s == "TUE") cout << 5 << '\n';
     if(s == "WED") cout << 4 << '\n';
      if(s == "THU") cout << 3 << '\n';
       if(s == "FRI") cout << 2 << '\n';





}
