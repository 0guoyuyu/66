#include <iostream>
using namespace std;
int main()
{
	int r1, r2, r3, C;
	cout << "请输入三角形的三条边r1,r2,r3" << endl;
	cin >> r1 >> r2 >> r3;
	if ((r1 + r2) > r3 && (r1 + r3) > r2 && (r2 + r3) > r1)
	{
		C = (r1 + r2 + r3);
		cout << "则三角形的周长为:" << r1 << r2 << r3 << endl;
			if (r1 = r2 != r3)
			{
				cout << "该三角形为等腰三角形";
			}
		else if (r1 = r3 != r2)
		{
				cout << "该三角形为等腰三角形";
		}
		else if (r2 = r3 != r1)
		{
				cout << "该三角形为等腰角形";
		}
		else if (r1 = r2 = r3)

		{
				cout << "该三角形为等腰三角形";
		}
		else
		{
				cout << "该三角形不是等腰三角形";
		}
	}
	else
	{
		cout << "您输入的三边数值无法构成三角形" << endl;
	}
}