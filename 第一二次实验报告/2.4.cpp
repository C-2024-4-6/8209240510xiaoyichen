#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+')cout << a + b;
	if (c == '-')cout << a - b;
	if (c == '*')cout << a * b;
	if (c == '/'&&b!=0)cout << a / b;
	if (c == '/' && b == 0)cout << "��������Ϊ0";
	if (c == '%' && b != 0)cout <<a%b ;
	if (c == '%' && b == 0)cout << "��������Ϊ0";
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%') cout << "������Ƿ�";
}