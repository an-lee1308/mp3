#include "Diem.h"

Diem::Diem()
{
	x = y = 0;
}

Diem::Diem(double HoanhDo, double TungDo)
{
	x = HoanhDo;
	y = TungDo;
}

double Diem::LayHoanhDo()
{
	return x;
}

double Diem::LayTungDo()
{
	return y;
}

void Diem::TaoToaDo(double HoanhDo, double TungDo)
{
	x = HoanhDo;
	y = TungDo;
}

void Diem::NhapDiem()
{
	cout << "Nhap toa do: ";
	cin >> x >> y;
}

void Diem::XuatDiem()
{
	cout << " (" << x << ", " << y << ") ";
}

void Diem::VeDiem()
{
	char HoanhDo[10], TungDo[10], text[10];
	_itoa(x, HoanhDo, 10);
	_itoa(y, TungDo, 10);

	initwindow(400, 400, "Hello World", 100, 100);
	fillellipse(x, y, 3, 3);
	outtextxy(x + 3, y + 3, strcat(strcat(HoanhDo, ", "), TungDo));
}

void Diem::TinhTien(double HoanhDo, double TungDo)
{
	x += HoanhDo;
	y += TungDo;
}

void Diem::Quay(double angle)
{
	x = x * cos(angle * 3.141592 / 180) + y * sin(angle * 3.141592 / 180);
	y = x * sin(angle * 3.141592 / 180) + y * cos(angle * 3.141592 / 180);
}