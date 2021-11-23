#include "HinhChuNhat.h"

void HinhChuNhat::Nhap()
{
	cout << "\n===== Nhap hinh chu nhat =====\n";

	cout << "Nhap chieu dai: ";
	cin >> Dai; // 200

	cout << "Nhap chieu rong: ";
	cin >> Rong; // 100

	TuGiac::NhapDacBiet();
}

void HinhChuNhat::Xuat()
{
	cout << "\nHinh chu nhat:";
	TuGiac::Xuat();
}

void HinhChuNhat::Ve()
{
	TuGiac::Ve();
}

void HinhChuNhat::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien hinh chu nhat: ";
	TuGiac::TinhTien(HoanhDo, TungDo);
}

void HinhChuNhat::Zoom(double k)
{
	cout << "\nZoom hinh chu nhat: ";
	TuGiac::Zoom(k);
}

void HinhChuNhat::Quay(double angle)
{
	cout << "\nQuay hinh chu nhat: ";
	TuGiac::Quay(angle);
}