#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;

void solve()
{
    int n;
    ll sum = 0;
    while (cin >> n)
        sum += n;

    cout << sum;
}

int main()
{   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
