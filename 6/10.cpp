#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	cout << "��ӷ�������Ϊ;" << x + y << endl;
	cout << "�����������Ϊ;" << x -y << endl;
	cout << "��˷�������Ϊ;" << x * y << endl;
	if(y!=0)
	{
		cout << "�����������Ϊ;" << x / y << endl;
	}
	else {
		cout << "����������ֲ��Ϸ�" << endl;
	}
	

}