#include <iostream>
using namespace std;
int main() 
{
    int a,m;
    int n = 1;
    cin>>a>>m;
    while(m>0)
    {
        m = m - a;
        n++;
        a++;
    }
    cout<<n-2;
    
    return 0;
}
