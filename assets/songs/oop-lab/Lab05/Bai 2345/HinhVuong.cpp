#include "HinhVuong.h"

void HinhVuong::Nhap()
{
	cout << "\n===== Nhap hinh vuong =====\n";

	cout << "Nhap chieu dai canh: ";
	cin >> Dai; // 200

	Rong = Dai;

	TuGiac::NhapDacBiet();
}

void HinhVuong::Xuat()
{
	cout << "\nHinh vuong:";
	TuGiac::Xuat();
}

void HinhVuong::Ve()
{
	TuGiac::Ve();
}

void HinhVuong::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien hinh vuong: ";
	TuGiac::TinhTien(HoanhDo, TungDo);
}

void HinhVuong::Zoom(double k)
{
	cout << "\nZoom hinh vuong: ";
	TuGiac::Zoom(k);
}

void HinhVuong::Quay(double angle)
{
	cout << "\nQuay hinh vuong: ";
	TuGiac::Quay(angle);
}