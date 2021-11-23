#include "Diem.h"

// Hàm khởi tạo mặc định
Diem::Diem(void)
{
	HoanhDo = TungDo = 0;
}

// Hàm khởi tạo tham số
Diem::Diem(float x, float y)
{
	HoanhDo = x;
	TungDo = y;
}

// Hàm khởi tạo sao chép
Diem::Diem(const Diem& n)
{
	HoanhDo = n.HoanhDo;
	TungDo = n.TungDo;
}

// Hàm hủy
Diem::~Diem(void)
{
	// RỖNG DO KHÔNG CÓ CON TRỎ
}

float Diem::LayHoanhDo()
{
	return HoanhDo;
}

float Diem::LayTungDo()
{
	return TungDo;
}

void Diem::TaoHoanhDo(float hd)
{
	HoanhDo = hd;
}

void Diem::TaoTungDo(float td)
{
	TungDo = td;
}

void Diem::NhapDiem()
{
	cout << "Nhap hoanh do: ";
	cin >> HoanhDo;

	cout << "Nhap tung do: ";
	cin >> TungDo;
}

void Diem::XuatDiem()
{
	cout << "(" << HoanhDo << ", " << TungDo << ")";
}

void Diem::TinhTien(float x, float y)
{
	HoanhDo += x;
	TungDo += y;
}


void Diem::VeDiem()
{
	char x[10], y[10], text[10];
	_itoa(HoanhDo, x, 10);
	_itoa(TungDo, y, 10);

	initwindow(400, 400, "Ve diem trong che do do hoa", 100, 100);
	fillellipse(HoanhDo, TungDo, 3, 3);
	outtextxy(HoanhDo + 3, TungDo + 3, strcat(strcat(x, ", "), y));
}