#include<iostream>
using namespace std;
#define pai 3.14
int main()
{
	double r, h, V;
	cout << "请输入圆椎锥的半径r:" << endl;
	cin >> r;
	cout << "请输入圆锥的高h:" << endl;
	cin >> h;
	V = (pai * r*r*h) / 3;
		cout << "则圆锥的体积V为:" << V << endl;
}