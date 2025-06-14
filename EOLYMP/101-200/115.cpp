#include <iostream>
using namespace std;
int main()
{
    int n, a = 31; cin >> n;
    int m[a];
    m[1] = 2; m[2] = 4;
    for(int i = 3; i<=n; i++) m[i] = m[i - 1] + m[i - 2];
    cout<<m[n];
    return 0;
}
