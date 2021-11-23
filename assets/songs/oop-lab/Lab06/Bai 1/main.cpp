#include "SoPhuc.h"

int main()
{
	SoPhuc a, b;
	SoPhuc TongSoPhuc, HieuSoPhuc;
	SoPhuc TichSoPhuc, ThuongSoPhuc;

	cin >> a;
	cout << "So phuc vua nhap la: " << a << endl;
	cout << "So phuc nay bang 0: " << !a << endl;

	cout << endl;

	cin >> b;
	cout << "So phuc vua nhap la: " << b << endl;
	cout << "So phuc nay bang 0: " << !b << endl;

	cout << endl;

	TongSoPhuc = a + b;
	cout << "Tong 2 so phuc vua nhap la: " << TongSoPhuc << endl;

	HieuSoPhuc = a - b;
	cout << "Hieu 2 so phuc vua nhap la: " << HieuSoPhuc << endl;

	TichSoPhuc = a * b;
	cout << "Tich 2 so phuc vua nhap la: " << TichSoPhuc << endl;

	ThuongSoPhuc = a / b;
	cout << "Thuong 2 so phuc vua nhap la: " << ThuongSoPhuc << endl;

	cout << endl;

	cout << "2 so phuc tren bang nhau ?: " << (a == b) << endl;
	cout << "2 so phuc tren khac nhau ?: " << (a != b) << endl;

	system("pause");
	return 0;
}
