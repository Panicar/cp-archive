#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, sum = 1, d = 1, ans = 1;
    cin >> s;
    while (sum < s)
    {
        ans++;
        d = d * 2 + ans;
        sum += d;
    }
    cout << ans;
    
    return 0;
}
