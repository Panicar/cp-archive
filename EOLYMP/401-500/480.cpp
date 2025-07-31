#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;

int power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p; 
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
         y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


int main()
{   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll a, b, c; cin>>a>>b>>c;
    cout<<power(a, b, c);
    return 0;
}
