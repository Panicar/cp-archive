#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>> a >> b >>c;
    if (b>a and a>c or c>a and a>b)
    cout<<a;
    else if(a<b and c>b or c<b and b<a)
    cout<<b;
    else if(a<c and c<b or b<c and c<a)
    cout<< c;
    return 0;
}
