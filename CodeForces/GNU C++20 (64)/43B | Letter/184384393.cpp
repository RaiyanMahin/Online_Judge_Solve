#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map < char, ll > mp2;
string ch(string str)
{
    stringstream ss(str);
    string temp;
    str = "";
    while(getline(ss, temp , ' '))
    {
        str = str + temp;
    }
 
    return str;
}
int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    string S = ch(s);
    string S1= ch(s1);
    ll d = S.size();
    ll d1 = S1.size();
    for(auto i : S1)
    {
        mp2[i]++;
    }
    ll ans = 0;
    for(auto i : mp2)
    {
        char c = i.first;
        ll xx = i.second;
        ll x = count(S.begin(), S.end(),c);
        if(x == 0)
        {
            ans = 1;
            break;
        }
        if( xx > x )
        {
            ans = 1;
            break;
        }
    }
    cout << ( ans ? "NO" : "YES" );
 
}