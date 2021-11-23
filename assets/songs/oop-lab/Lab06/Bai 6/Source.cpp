#include "CString.h"

int main()
{
	CString s, x;
	cin >> s;
	x = s;

	cout << s + x << endl;
	cout << (s == x) << endl;

	system("pause");
	return 0;
}