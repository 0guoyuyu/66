#include <iostream>
using namespace std;
int main()
{
	int r1, r2, r3, C;
	cout << "�����������ε�������r1,r2,r3" << endl;
	cin >> r1 >> r2 >> r3;
	if ((r1 + r2) > r3 && (r1 + r3) > r2 && (r2 + r3) > r1)
	{
		C = (r1 + r2 + r3);
		cout << "�������ε��ܳ�Ϊ:" << r1 << r2 << r3 << endl;
			if (r1 = r2 != r3)
			{
				cout << "��������Ϊ����������";
			}
		else if (r1 = r3 != r2)
		{
				cout << "��������Ϊ����������";
		}
		else if (r2 = r3 != r1)
		{
				cout << "��������Ϊ��������";
		}
		else if (r1 = r2 = r3)

		{
				cout << "��������Ϊ����������";
		}
		else
		{
				cout << "�������β��ǵ���������";
		}
	}
	else
	{
		cout << "�������������ֵ�޷�����������" << endl;
	}
}