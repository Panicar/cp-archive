#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}


int main()
{
    ll ans;
    int n; cin>>n;
    ll a[n]; for(int i = 0; i < n; i++) cin>>a[i];
    ans = a[0];
    for(int i = 1; i < n; i ++)
        ans = gcd(ans, a[i]);
    cout<<ans;
    return 0;
}
