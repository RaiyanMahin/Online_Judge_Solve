/*
import from prev account
 
new submission : https://codeforces.com/contest/1277/submission/185455633
 
hope that I have improved mayb ? */
 
        #include "bits/stdc++.h"
        using ll = long long int;
        //khub e baler approach
        using namespace std;
        int main()
        {
                ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a[]={1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111,11111111111,111111111111,
    2,22,222,2222,22222,222222,2222222,22222222,222222222,2222222222,22222222222,222222222222,
    3,33,333,3333,33333,333333,3333333,33333333,333333333,3333333333,33333333333,333333333333,
    4,44,444,4444,44444,444444,4444444,44444444,444444444,4444444444,44444444444,444444444444,
    5,55,555,5555,55555,555555,5555555,55555555,555555555,5555555555,55555555555,555555555555,
    6,66,666,6666,66666,666666,6666666,66666666,666666666,6666666666,66666666666,666666666666,
    7,77,777,7777,77777,777777,7777777,77777777,777777777,7777777777,77777777777,777777777777,
    8,88,888,8888,88888,888888,8888888,88888888,888888888,8888888888,88888888888,888888888888,
    9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999,99999999999,999999999999
        };
        int t; cin >> t;
        for(int j = 1; j <= t; j++)
        {
        ll x; cin >> x; ll cnt = 0;
        for(ll i = 0; i < 108; i++)
        {
            if(x >= a[i]) cnt++;
        }
        cout << cnt << '\n';
        cnt = 0;
        
        }
        }