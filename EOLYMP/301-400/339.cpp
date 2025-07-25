#include<bits/stdc++.h>
using namespace std;
int phi(int n){
    int ans = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            while(n%i == 0){
                n /= i;
            }
            ans -= ans/i;
        }
    }
    if(n > 1){
        ans -= ans/n;
    }
    return ans;
}
int main()
{
    int n;
    while(cin>>n && n != 0){
        cout<<phi(n)<<endl;
    }
}
