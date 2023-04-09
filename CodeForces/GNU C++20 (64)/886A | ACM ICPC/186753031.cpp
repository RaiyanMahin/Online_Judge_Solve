#include<iostream>
using namespace std;
int main()
{
    int a,b,c,e,d,f;
    cin>>a>>b>>c>>d>>e>>f;
    if (a+b+c==e+d+f || a+b+d==c+e+f || a+b+e==c+d+f || a+b+f==c+d+e || a+c+d==b+e+f || a+c+e==b+d+f || a+c+f==b+d+e || a+d+e==b+c+f || a+d+f==b+c+e || a+e+f==b+c+d){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}