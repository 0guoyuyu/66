#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	cout << "则加法运算结果为;" << x + y << endl;
	cout << "则减法运算结果为;" << x -y << endl;
	cout << "则乘法运算结果为;" << x * y << endl;
	if(y!=0)
	{
		cout << "则除法运算结果为;" << x / y << endl;
	}
	else {
		cout << "您输入的数字不合法" << endl;
	}
	

}