#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void baal()
{
    string s; cin >> s; ll x = s.size();
    if(s[0] == s[x - 1])
    {
        cout << "NO\n"; return;
    }
    ll a = 0, b = 0, c = 0;
 
 
    string ss = "";
    for(ll i = 0; i < x; i++)
    {
        if(s[i] == s[0])
        {
            ss += '(';
        }
        else if(s[i] == s[x - 1])
        {
            ss += ')';
        }
        else
            ss += '*';
    }
    for(ll i = 0; i < x; i++)
    {
        if(ss[i] == '(')
            a++;
        else if(ss[i] == ')')
            b++;
        else
            c++;
    }
    // a = ( , b = ) , c = *
    // cout << "YES\n"; return;
    if(a != b)
    {
        ll kk = 0;
        if(c == 0 or c < abs(a - b)  or c > abs(a - b))
        {
            cout << "NO\n";
            kk = 1;
            //cout << " ans " << ss << endl;
            return;
 
        }
        if(!kk)
        {
            ll mn = min(a , b);
            if(mn == a)
            {
                for(ll i = 0; i < x; i++)
                {
                    if(ss[i] == '*')
                    {
                        ss[i] = '(';
                    }
                }
 
 
            }
            else if(mn == b)
            {
                for(ll i = 0; i < x; i++)
                {
                    if(ss[i] == '*')
                    {
                        ss[i] = ')';
                    }
                }
 
 
            }
            ll boo = 0, aa = 0, bb = 0;
            for(ll i = 0; i < x; i++)
            {
 
                if(ss[i] == '(')
                    aa++;
                else if(ss[i] == ')' )
                    bb++;
 
 
                if(bb > aa)
                {
                    boo = 1;
                    cout << "NO\n";
                  //  cout << " ans " << ss << endl;
                    return;
 
 
                }
            }
 
        if(!boo)
        {
            cout << "YES\n";
           // cout << " ans " << ss << endl;
            return;
        }
        }
 
 
 
 
 
 
    }
    else if(a == b)
    {
        if(!c)
        {
            ll boo = 0, aa = 0, bb = 0;
            for(ll i = 0; i < x; i++)
            {
 
                if(ss[i] == '(')
                    aa++;
                else if(ss[i] == ')' )
                    bb++;
 
                if(bb > aa)
                {
                    boo = 1;
                    cout << "NO\n";
                 //   cout << " ans " << ss << endl;
                    return;
 
 
                }
            }
 
        if(!boo)
        {
            cout << "YES\n";
           // cout << " ans " << ss << endl;
            return;
        }
        }
        else if(c)
        {
            cout << "NO\n";
          //  cout << " ans " << ss << endl;
            return;
        }
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   return;
}
 
int main()
{
 
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
 
}