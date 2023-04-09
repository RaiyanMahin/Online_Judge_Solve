#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define md 1000000007
int main()
{
    int n,m; cin >> n >> m;
    if(n == 1 && m == 2) cout << 3 ;
         if(n == 1 && m == 3) cout << 2 ;
     if(n == 2 && m == 3) cout << 1 ;
      if(n == 2 && m == 1) cout << 3 ;
      if(n == 3 && m == 2) cout << 1 ;
      if(n == 3 && m == 1) cout << 2 ;
    
}
