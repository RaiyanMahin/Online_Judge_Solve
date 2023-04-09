#include <bits/stdc++.h>
using namespace std;
#define int long long
int nthXorFib(int n, int a, int b)
{
 if (n == 0)
  return a;
 if (n == 1)
  return b;
 if (n == 2)
  return (a ^ b);
 
 return nthXorFib(n % 3, a, b);
}
main()
{
 int t; cin >> t;
 while(t--)
 {
     int a,b,n; cin >> a >> b >> n;
     cout << nthXorFib(n, a, b) << '\n';
 
 }
 
 //cout << nthXorFib(n, a, b);
 
 
}
//cpy