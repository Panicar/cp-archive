#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    char t = '0';
    for(auto c : s){
        if(c == t)
            cout<<0;
        else
            cout<<1;
        t = c;
    }

    return 0;
}
