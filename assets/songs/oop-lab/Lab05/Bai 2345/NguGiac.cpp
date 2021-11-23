#include "NguGiac.h"

NguGiac::NguGiac()
{
	SoDinh = 5;
}

NguGiac::~NguGiac()
{
	delete[] ToaDoDinh;
}

void NguGiac::Nhap()
{
	cout << "\n===== Nhap ngu giac =====\n";
	DaGiac::Nhap();
}

void NguGiac::Xuat()
{
	cout << "\nNgu giac:";
	DaGiac::Xuat();
}

void NguGiac::Ve()
{
	initwindow(400, 400, "Ve ngu giac trong che do do hoa");
	DaGiac::Ve();
}

void NguGiac::TinhTien(double HoanhDo, double TungDo)
{
	cout << "\nTinh tien ngu giac ";
	DaGiac::TinhTien(HoanhDo, TungDo);
}

void NguGiac::Zoom(double k)
{
	cout << "\nZoom ngu giac ";
	DaGiac::Zoom(k);
}

void NguGiac::Quay(double angle)
{
	cout << "\nQuay ngu giac ";
	DaGiac::Quay(angle);
}