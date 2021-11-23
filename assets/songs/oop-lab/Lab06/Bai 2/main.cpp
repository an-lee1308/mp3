#include "PhanSo.h"

int main()
{
	PhanSo a, b;
	PhanSo TongPhanSo, HieuPhanSo;
	PhanSo TichPhanSo, ThuongPhanSo;

	cin >> a;
	cout << "Phan so vua nhap la: " << a << endl;
	cout << "Phan so vua nhap co bang 0 ?: " << !a << endl;

	cout << "Phan so vua nhap co bang 3 ?: " << (a == 3) << endl;
	cout << "Phan so vua nhap co khac 3 ?: " << (a != 3) << endl;

	cout << "3 co bang phan so vua nhap ?: " << (3 == a) << endl;
	cout << "3 co khac phan so vua nhap ?: " << (3 != a) << endl;

	cout << endl;
	
	cin >> b;
	cout << "Phan so vua nhap la: " << b << endl;
	cout << "Phan so vua nhap co bang 0 ?: " << !b << endl;

	cout << "Phan so vua nhap co bang 3 ?: " << (b == 3) << endl;
	cout << "Phan so vua nhap co khac 3 ?: " << (b != 3) << endl;

	cout << "3 co bang phan so vua nhap ?: " << (3 == b) << endl;
	cout << "3 co khac phan so vua nhap ?: " << (3 != b) << endl;

	cout << endl;

	TongPhanSo = 7 + a + b + 3;
	cout << "7 + Tong 2 phan so vua nhap + 3 la: " << TongPhanSo << endl;
	
	HieuPhanSo = 7 - a - b - 3;
	cout << "7 - Hieu 2 phan so vua nhap - 3 la: " << HieuPhanSo << endl;

	TichPhanSo = 7 * a * b * 3;
	cout << "7 * Tich 2 phan so vua nhap * 3 la: " << TichPhanSo << endl;

	ThuongPhanSo = 7 / a / b / 3;
	cout << "7 / Thuong 2 phan so vua nhap / 3 la: " << ThuongPhanSo << endl;

	cout << endl;

	cout << "2 phan so vua nhap co bang nhau ?: " << (a == b) << endl;
	cout << "2 phan so vua nhap co khac nhau ?: " << (a != b) << endl;

	system("pause");
	return 0;
}