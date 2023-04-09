 #include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,d=0; cin>>n; int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n); reverse(a,a+n);
    for(int i=1;i<n;i++)
    {
        d += a[0]-a[i];
    }
    cout<<d<<endl;
}