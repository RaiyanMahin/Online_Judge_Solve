/* #include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=1e6,inf=1e9;
double aa[N+2],qm[N+2];
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int n,k;cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
    int x;cin>>x;
    aa[i]=(1.0*((x*(x+1))/2))/(1.0*x);
    qm[i]=qm[i-1]+aa[i];
  }
  double mx=0;
  for(int i=k;i<=n;i++)
    mx=max(mx,qm[i]-qm[i-k]);
  cout<<setprecision(10)<<fixed<<mx<<endl;

  return 0;
} */
/*
#include<bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

#define mem(a,x) memset(a,x,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
#define pi pair<int,int>
#define vi vector<int>
#define pL pair<ll,ll>
#define vL vector<ll>
#define vp vector<pi>
#define vpL vector<pL>

const int MX=300000;

double a[MX+5];

int main()
{
    FasterIO;

    int n, m, k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x; a[i]=((x*(x+1))/2)/(x*1.0);
    }
    double mx=0, sm=0;
    for(int i=1; i<=k; i++) sm+=a[i];
    mx=sm;
    for(int i=k+1; i<=n; i++)
    {
        sm+=a[i]; sm-=a[i-k]; mx=max(mx, sm);
    }
    cout<<setprecision(10)<<fixed<<mx<<endl;
    return 0;
} */
/*
#include<bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef unsigned long long ull;
typedef long long ll;
typedef double db;

#define mem(a,x) memset(a,x,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
#define pi pair<int,int>
#define vi vector<int>
#define pL pair<ll,ll>
#define vL vector<ll>
#define vp vector<pi>
#define vpL vector<pL>

const int MX=3000;

ll dp[MX][2][10], n;
string s;
ll call(int p, int f, int k)
{
    if(p==n) return !k;
    ll &ret=dp[p][f][k];
    if(!k)   return ret=1;
    if(~ret) return ret;
    ret=0;
    if(f)
    {
        ret+=call(p+1, 1, k);
        for(int i=1; i<10; i++)
        {
            ret+=call(p+1, 1, k-1);
        }
    }
    else
    {
        for(int i=0; i<s[p]-'0'; i++)
        {
            ret+=call(p+1, 1, (i)?k-1:k);
        }
        ret+=call(p+1, f, (s[p]!='0')?k-1:k);
    }
    return ret;
}

int main()
{
    FasterIO;

    int m, k;
    cin>>s>>k; n=s.size();
    mem(dp, -1);
    ll r1=call(0, 0, k);
    cout<<r1<<endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=4e6,mod=1e9+7;
int big(int b,int p,int m=mod)
{
  int ret=1;
  while(p){if(p&1)ret=(1LL*ret*b)%m;b=(1LL*b*b)%m;p/=2;}
  return ret;
}
int fac[N+2];
void init(int n)
{
  fac[0]=1;
  for(int i=1;i<=n;i++)fac[i]=(1LL*fac[i-1]*i)%mod;
}
int ncr(int n,int r)
{
  int a=fac[n];a=(1LL*a*big(fac[r],mod-2))%mod;
  return (1LL*a*big(fac[n-r],mod-2))%mod;
}
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  init(N);

  int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;

  int ans=0;
  for(int c=c1;c<=c2;c++)
  {
    ans=(ans+ncr(r2+c+1,r2))%mod;
    ans=((ans-ncr(r1+c,r1-1))%mod+mod)%mod;
  }
  cout<<ans<<endl;

  return 0;
} */
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    vector <int >rm;
    int n; cin >> n; int a[n + 10];
    for(int i = 0;  i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        { 
            rm.push_back(a[i]);
            
        }
        
        
    }
    int cnt=0;
    for(int i = 0; i < rm.size(); i++)
    {
        if(rm[i] % 3 == 0 || rm[i] % 5 == 0)
        {
            cnt++;
        }
    }
    if(cnt == rm.size())
    {
        cout << "APPROVED" << '\n';
    }
    else cout << "DENIED" << '\n';
    
    
    
    
    
    
    
    
    
    
    
}