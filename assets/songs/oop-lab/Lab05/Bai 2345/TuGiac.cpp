#include "TuGiac.h"

TuGiac::TuGiac()
{
	SoDinh = 4;
	Dai = Rong = 0;
}

TuGiac::~TuGiac()
{
	delete[] ToaDoDinh;
}

void TuGiac::NhapDacBiet()
{
	cout << "\nNhap diem lam goc:\n";
	DiemGoc.NhapDiem(); // 100 100

	double xGoc = DiemGoc.LayHoanhDo();
	double yGoc = DiemGoc.LayTungDo();

	ToaDoDinh = new Diem[SoDinh];
	ToaDoDinh[0].TaoToaDo(xGoc, yGoc);
	ToaDoDinh[1].TaoToaDo(xGoc, yGoc + Rong);
	ToaDoDinh[2].TaoToaDo(xGoc + Dai, yGoc + Rong);
	ToaDoDinh[3].TaoToaDo(xGoc + Dai, yGoc);
}

void TuGiac::Nhap()
{
	cout << "\n===== Nhap tu giac =====\n";
	DaGiac::Nhap();
}

void TuGiac::Xuat()
{
	cout << "\nTu giac: ";
	DaGiac::Xuat();
}

void TuGiac::Ve()
{
	initwindow(400, 400, "Ve tu giac trong che do do hoa");
	DaGiac::Ve();
}

void TuGiac::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien tu giac ";
	DaGiac::TinhTien(HoanhDo, TungDo);
}

void TuGiac::Zoom(double k)
{
	cout << "\nZoom tu giac ";
	DaGiac::Zoom(k);
}

void TuGiac::Quay(double angle)
{
	cout << "\nQuay tu giac ";
	DaGiac::Quay(angle);
}