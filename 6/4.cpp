#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "�����뻪���¶�a:" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	b *= 100;
	b = ceil(b);
	b = b - 1;
		b /= 100;
	cout << "���Ӧ�������¶�Ϊ:" <<b<< endl;













}
