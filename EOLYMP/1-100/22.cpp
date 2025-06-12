#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mirror(ll n){
    ll ans = 0;
    string s = to_string(n);
    for(ll i = s.size()-1; i>=0; i--){
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}

bool isPrime(ll n){
    if (n == 1)
        return false;
    for(ll i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    ll a, b, cnt = 0; cin>>a>>b;
    for(ll i = a; i <= b; i++)
        if(isPrime(i) && isPrime(mirror(i)))
            cnt++;
    cout<<cnt;
    return 0;
}
