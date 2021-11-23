#include "ThoiGian.h"

ThoiGian::ThoiGian()
{
	Gio = Phut = Giay = 0;
}

ThoiGian::~ThoiGian()
{

}

int ThoiGian::LayGio()
{
	return Gio;
}

int ThoiGian::LayPhut()
{
	return Phut;
}

int ThoiGian::LayGiay()
{
	return Giay;
}

void ThoiGian::TaoGio(int gio)
{
	Gio = gio;
}

void ThoiGian::TaoPhut(int phut)
{
	Phut = phut;
}

void ThoiGian::TaoGiay(int giay)
{
	Giay = giay;
}

void ThoiGian::NhapThoiGian()
{
	do
	{
		cout << "Nhap gio: ";
		cin >> Gio;
	} while (Gio < 0 || Gio > 24);
	cout << endl;

	do
	{
		cout << "Nhap phut: ";
		cin >> Phut;
	} while (Phut < 0 || Phut > 60);
	cout << endl;

	do
	{
		cout << "Nhap giay: ";
		cin >> Giay;
	} while (Giay < 0 || Giay > 60);
	cout << endl;
}

void ThoiGian::XuatTheoKhung12Gio()
{
	cout << "Hien thi theo khung 12 gio: ";

	if (Gio >= 12)
	{
		cout << setfill('0') << setw(2) << Gio - 12 << ":"
			 << setfill('0') << setw(2) << Phut << ":"
			 << setfill('0') << setw(2) << Giay << " PM" << endl;
	}
	else
	{
		cout << setfill('0') << setw(2) << Gio << ":"
			 << setfill('0') << setw(2) << Phut << ":"
			 << setfill('0') << setw(2) << Giay << " AM" << endl;
	}
}

void ThoiGian::XuatTheoKhung24Gio()
{
	cout << "Hien thi theo khung 24 gio: ";

	cout << setfill('0') << setw(2) << Gio << ":"
		 << setfill('0') << setw(2) << Phut << ":"
		 << setfill('0') << setw(2) << Giay << endl;
}
