#include<iostream>
using namespace std;
int main()
{
	int a,x,m,n;
	cin >> a;
	x = a;
	m = 0;
	while (-0.00001 < m < 0.00001)
	{
		n = x;
		x = 1 / 2 * (x + a / x);
		m = x - n;
	}

	cout << "初始值的平方根为:" << x<<endl;

}