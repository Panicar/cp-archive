#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, ans = 0; cin>>n;
    int a[6] = {500, 200, 100, 50, 20, 10};
    if(n % 10 != 0)
        cout<<-1;
    else{
        for(int i = 0; i < 6; i++){
            int cur = n / a[i];
            ans += cur;
            n -= cur * a[i];
        }
        cout<<ans;
    }
    
    
    
    return 0;
}
