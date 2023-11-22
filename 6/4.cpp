#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入华氏温度a:" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	b *= 100;
	b = ceil(b);
	b = b - 1;
		b /= 100;
	cout << "相对应的摄氏温度为:" <<b<< endl;













}
