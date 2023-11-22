#include <iostream>
using namespace std;
#include<string>


int main()
{
	string str;
	getline(cin, str);
	int whitespace = 0;
	int chars = 0;
	int digits = 0;
	int others = 0;
	for (int i = 0;i < str.length();i++)
	{
		if (isalpha(str[i]))
			chars++;
		else if (isdigit(str[i]))
			digits++;
		else if (isspace(str[i]))
			whitespace++;
		else
			others++;
	}
	cout << "chars :" << chars
		<< "whitespace:" << whitespace
		<< "digits:" << digits
		<< "others:" << others << endl;



	return 0;
}