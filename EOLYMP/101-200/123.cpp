#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b, n; cin>>n;
    a = 5;
    b = 0;
    while(a<n)
    {
        b += n/a;
        a *= 5;
    }
    cout<<b;
    return 0;
}
