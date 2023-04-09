
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m; int cnt = 0;
    //if( n <= m) cout << n << '\n';
//    if(n > m )
//    {
//        if(n % m == 0)
//        {
//            int d = n / m; cout << d << '\n';
//        }
//        if(n % m != 0) 
//        {
//            int d = n / m; cout << d + 1 << '\n'; 
//        }
//    }
    //int cnt  = 0 ;
    while(n != 0 || n < 0)
    {
        n -= m;
        cnt++;
        if(n < 0 || n == 0) break;
    }
    cout << cnt << '\n';
    
}
