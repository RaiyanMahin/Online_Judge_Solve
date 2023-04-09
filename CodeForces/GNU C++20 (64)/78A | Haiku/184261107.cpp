#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string a,b,c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    ll c_51 = 0 , c_52 = 0, c_7 = 0;
    for(auto x : a)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u')
            c_51++;
    }
    for(auto x : b)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u')
            c_7++;
    }
    for(auto x : c)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u')
            c_52++;
    }
    if(c_51 == 5 && c_52 == 5 && c_7 == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
 
}