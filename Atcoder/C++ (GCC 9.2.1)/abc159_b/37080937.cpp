#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string s,a,b ,A,B; cin >> s; string s2 = s; ll x = s.size();
    reverse(s2.begin() , s2.end());
    if(s2 == s)
    {
        ll d = (x - 1) / 2;
        ll D = (x + 3 ) / 2;
        a = s.substr(0, d);
        b = s.substr(D - 1, x);
        //cout << "eta a" << ' ' << a << ' ' << "te B" << ' ' << b << '\n';
        A = a; B = b;
        reverse(A.begin() , A.end());
        reverse(B.begin() , B.end());
        if(a == A && b == B)
        {
            return cout << "Yes\n" , 0;
        }


    }
    return cout << "No\n" , 0;

}
