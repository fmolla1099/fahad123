#include <iostream>
using namespace std;
int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '-';
	cout << "Calculator Console Application" << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	while (true)
	{
		cin >> x >> oper >> y;
		result = (x, oper, y);
		cout << "Result is:" << result << endl;
	}
	return 0;
}
