#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
  ll n,m, k;  cin >> n >> m >> k;
  ll a = n -k ;
  if(a < 0)
  {
      cout << 0 << ' ';
      ll b = a + m;
      if(b < 0) cout << 0 << '\n';
      else cout << b << '\n';

  }
  else {
    cout << a << ' ';
    cout << m << '\n';
  }

}
