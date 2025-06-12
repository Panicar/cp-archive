#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, g = 0, v = 0, c = 0;
    cin>>n;
    while (v <= 0.5){
        v = v + 1.0 / (n-c);
        g += 1;
        c += 1;
    }
    cout<< n-g+1 <<endl;
    return 0;
}
