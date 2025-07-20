#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(string s){
    ll Sum = 0;
    for(char c : s)
        Sum += c - '0';
    
    if (Sum < 10)
        return Sum;
    else
        return sum(to_string(Sum));
}

int main() {
    string n; cin>>n;
    cout<<sum(n);
    return 0;
}
