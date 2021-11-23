#include "TamGiac.h"

TamGiac::TamGiac()
{
	SoDinh = 3;
}

TamGiac::~TamGiac()
{
	delete[] ToaDoDinh;
}

void TamGiac::Nhap()
{
	cout << "\n===== Nhap tam giac =====\n";
	DaGiac::Nhap();
}

void TamGiac::Xuat()
{
	cout << "\nTam giac:";
	DaGiac::Xuat();
}

void TamGiac::Ve()
{
	initwindow(400, 400, "Ve tam giac trong che do do hoa");
	DaGiac::Ve();
}

void TamGiac::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien tam giac ";
	DaGiac::TinhTien(HoanhDo, TungDo);
}

void TamGiac::Zoom(double k)
{
	cout << "\nZoom tam giac ";
	DaGiac::Zoom(k);
}

void TamGiac::Quay(double angle)
{
	cout << "\nQuay tam giac ";
	DaGiac::Quay(angle);
}