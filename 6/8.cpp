#include<iostream>
using namespace std;
int main()
{
	int x, y, z,i;
	cin >> x >> y;
	int n1 = x, n2 = y;
	while (x % y != 0) {
		z = x % y;
		x = y;
		x = z;

	}
	i = n1 * n2 / x;
	cout << "���Լ��" << x;
	cout << "��С������" << i << endl;
}