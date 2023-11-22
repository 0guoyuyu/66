#include<iostream>
using namespace std;
int main()
{
	float a = 2;
	float n = 2;
	float x = 2;
	float  v;
	while (a <= 100)
	   {
		a = 2 * a;
		n = n + 1;
		x = x + a;
	    }
	v = (0.8 * x)/ n;
	cout << "则每天平均花:" << v << endl;
	return 0;
}






















