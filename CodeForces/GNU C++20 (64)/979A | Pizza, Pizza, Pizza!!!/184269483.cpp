 #include<bits/stdc++.h>
        using namespace std;
        #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
        typedef long long ll;
 int main()
        {
            ll n; cin >> n; if(n==0){
            cout << 0 << '\n'; return 0; }
            else {
            n += 1; if(n%2==1) cout << n << '\n'; if(n%2==0) cout << n / 2 << '\n'; }
 
        }