        #include "bits/stdc++.h"
        using namespace std;
        using ll = long long;
        int main()
        {
            ll n; cin >> n; string s; cin >> s;
            ll d = count(s.begin(), s.end() , 'L');
            ll dd = count(s.begin(), s.end() , 'R');
            cout << dd + d + 1;
           
 
        }