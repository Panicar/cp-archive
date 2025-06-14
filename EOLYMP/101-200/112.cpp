#include <iostream>
using namespace std;
int main()
{
	int t1, t2, t3;
	cin >> t1 >> t2 >> t3;
	cout << fixed << (float)(1/(1 / (float)t1 + 1/(float)t2 + 1/(float)t3));
	return 0;
}
