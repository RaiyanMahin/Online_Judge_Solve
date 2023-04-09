#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll w , h , n; cin >> w >> h >> n;
        if(w % 2 == h % 2 and w & 1)
        {
            if(n == 1)
                cout << "YES\n";
            if(n > 1)
                cout << "NO\n";
        }
        else if(w % 2 == h % 2 and w % 2 == 0)
        {
            ll o1 = 1, o2 = 1;
            while(w % 2 == 0)
            {
                w /= 2 ; o1 *= 2;
            }
            while(h % 2 == 0 )
            {
                h /= 2 ; o2 *= 2;
            }
           // cout << " o1 " << o1 << " o2 " << o2 << endl;
            if( o1 * o2 >= n  )
 
                cout << "YES\n";
            if(o1 * o2 < n)
                cout << "NO\n";
        }
       else if(w % 2 != h % 2)
        {
 
            if(w % 2 == 0)
            {
                ll cnt = 1;
                while(w % 2 == 0)
                {
                    w /= 2; cnt *= 2;
                }
              //  cout << " cn " << cnt <<  endl;
                if(cnt >= n)
                    cout << "YES\n";
                else
                    cout << "NO\n";
 
 
            }
            if(h % 2 == 0)
            {
                ll ct = 1;
                while(h % 2 == 0)
                {
                    h /= 2; ct *= 2;
                }
               // cout << " ct " <<  ct << endl;
                if(ct >= n)
                    cout << "YES\n";
                else
                    cout << "NO\n";
 
            }
        }
 
 
    }
}