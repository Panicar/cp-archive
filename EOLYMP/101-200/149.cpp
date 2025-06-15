#include <bits/stdc++.h>
using namespace std;
long long solve(long long x)
{
    double digits = 0;
    for(int i = 2; i<=x; i++)
    digits += log10(i);
    return floor(digits) + 1;
}
int main()
{
    long long n; cin>>n;
    cout<<solve(n);
    return 0;
}
