#include <bits/stdc++.h>
using namespace std;

void solve(){
    long L, W, H; cin>>L>>W>>H;
    double ans;
    ans = (L * H * 2 + H * W * 2) / 16.0;
    cout<<ceil(ans)<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t; cin>>t; 
    while (t--) solve();
    return 0;
}
