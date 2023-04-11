#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
const ll N = 1e6 + 5;
    //okay check new new vs code
    vector<bool> vis(N,true);
    void Sieve()
    {
    	for (ll i = 2; i*i < N; i ++)
            {
    		if (vis[i] == true)
                    {
                            for(ll j=i*i;j<N;j+=i)
                                    vis[j] = false;
    		}
    	}
            vis[1] = false;
    }


int main()
{
    Sieve();
    vector < ll > primes;
    for(ll i = 2; i <= N; i++)
    {
        if(vis[i])
            primes.push_back(i);
    }
    ll n; cin >> n;
    for(ll i = 0; i < primes.size() and n; i++)
    {
        if(n)
        {
            cout << primes[i] << ' ';
            n--;
        }
    }


}



