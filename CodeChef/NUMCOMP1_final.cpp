#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

const int MAX = 1e7 + 10;
int prime[MAX];

void sieve()
{
  for (int i = 2; i < MAX; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j < MAX; j += i)
      {
        prime[j] = 0;
      }
    }
  }

  for (int i = 3; i < MAX; i++)
  {
    prime[i] += prime[i - 1];
  }
}
void solve()
{
  int n;
  cin >> n;
  int ans = prime[n] - prime[n / 2] + 1;
  cout << ans << endl;


}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = 1; i < MAX; i++)
    prime[i] = 1;

  sieve();

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
