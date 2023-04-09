 
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long int  ll;
    /* ll gcd(ll a, ll b)
   {
    return b == 0 ? a : gcd(b, a % b);
    }  */
    int main()
    {
        int t;  cin >> t;
        while(t--)
        {
            bool s = true;
            int a,b; cin >> a >> b;
            for(int i = 2; i <= min(a,b); i++)
            {
                if(a%i == 0 && b%i == 0 ) {
                    s = false;
                }
 
            }
            if(!s) {
                cout << "Infinite" << '\n';
            }
            else {
                cout << "Finite" << '\n';
            }
        }
 
 
 
 
 
 
 
 
 
    }
 
 