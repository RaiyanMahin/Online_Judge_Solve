#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
 
    string a,b; cin >> a >> b;
    ll q = 0 , z = 0;
    if(a.size() != b.size())
    {
        cout << "No" << '\n';
        return 0;
    }
    if(a.size() == b.size())
    {
 
        for(ll i = 0; i < a.size() ; i++)
        {
//            rm.clear();
//            R.clear();
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
                {
                    continue;
                }
                if(b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u')
                {
                    q = 1;
                    break;
 
 
                }
 
 
            }
            if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
            {
                if(b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u')
                {
                    continue;
                }
 
                if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
                {
                    z = 1;
                    break;
 
                }
 
 
 
            }
        }
       if( q == 0 && z == 0)
       {
           cout << "Yes\n";
       }
       if(q == 1 || z == 1)
       {
           cout << "No\n";
       }
 
 
    }
 
 
}
//int main()
//{
//    ///https://codeforces.com/contest/1077/problem/B
//    int t; cin >> t;
//    while(t--)
//    {
//        ll a,b, k; cin >> a >> b >> k; ll s = 0;
//        if(  ! (k & 1) )
//        {
//            for(ll i = 1; i <= (k / 2); i++)
//        {
//            s += ( a - b);
//
//        }
//        cout << s << '\n';
//        s = 0;
//        }
//        if( k & 1)
//        {
//            for(ll i = 1; i <= (k / 2); i++)
//        {
//            s += ( a - b);
//
//        }
//        cout << s + a << '\n';
//        s = 0;
//        }
//    }
//}