#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string s,s1; cin >> s; s1 = s;
    sort(s1.begin() , s1.end());
    if(s1 != s)
    {
        return cout << "NO\n" , 0;
    }
    if(s1 == s)
    {
        ll d = s.size();
        vector <ll > a;
        vector <ll > b;
        vector <ll > c;
        for(ll i = 0; i < d; i++)
        {
            if(s[i] == 'a')
                a.push_back(1);
            if(s[i] == 'b')
                b.push_back(2);
            if(s[i] == 'c')
                c.push_back(3);
        }
        if(a.size() == 0 or b.size() == 0 or c.size() == 0)
        {
            return cout << "NO\n" , 0;
        }
        else if(c.size() == a.size() or c.size() == b.size() or (c.size() == b.size() and c.size() == a.size()) )
        {
            return cout << "YES\n", 0;
        }
        else
            {
                return cout << "NO\n", 0;
            }
 
    }
}