#include "PhanSo.h"

int UCLN(int Tu, int Mau)
{
	if (Mau == 0)
		return Tu;
	return UCLN(Mau, Tu % Mau);
}

PhanSo::PhanSo()
{
	iTu = 0;
	iMau = 1;
}

PhanSo PhanSo::operator+(int n)
{
	int tu1 = iTu * 1;
	int tu2 = iMau * n;

	int mauchung = iMau * 1;
	int gcd = UCLN(tu1 + tu2, mauchung);

	PhanSo tong;
	tong.iTu = (tu1 + tu2) / gcd;
	tong.iMau = mauchung / gcd;

	return tong;
}

PhanSo PhanSo::operator+(const PhanSo ps)
{
	int tu1 = iTu * ps.iMau;
	int tu2 = iMau * ps.iTu;

	int mauchung = iMau * ps.iMau;
	int gcd = UCLN(tu1 + tu2, mauchung);

	PhanSo tong;
	tong.iTu = (tu1 + tu2) / gcd;
	tong.iMau = mauchung / gcd;

	return tong;
}

PhanSo PhanSo::operator-(int n)
{
	int tu1 = iTu * 1;
	int tu2 = iMau * n;

	int mauchung = iMau * 1;
	int gcd = UCLN(tu1 - tu2, mauchung);

	PhanSo hieu;
	hieu.iTu = (tu1 - tu2) / gcd;
	hieu.iMau = mauchung / gcd;

	return hieu;
}

PhanSo PhanSo::operator-(const PhanSo ps)
{
	int tu1 = iTu * ps.iMau;
	int tu2 = iMau * ps.iTu;

	int mauchung = iMau * ps.iMau;
	int gcd = UCLN(tu1 - tu2, mauchung);

	PhanSo hieu;
	hieu.iTu = (tu1 - tu2) / gcd;
	hieu.iMau = mauchung / gcd;

	return hieu;
}

PhanSo PhanSo::operator*(int n)
{
	int tu = iTu * n;
	int mauchung = iMau * 1;
	int gcd = UCLN(tu, mauchung);

	PhanSo tich;
	tich.iTu = tu / gcd;
	tich.iMau = mauchung / gcd;

	return tich;
}

PhanSo PhanSo::operator*(const PhanSo ps)
{
	int tu = iTu * ps.iTu;
	int mauchung = iMau * ps.iMau;
	int gcd = UCLN(tu, mauchung);

	PhanSo tich;
	tich.iTu = tu / gcd;
	tich.iMau = mauchung / gcd;

	return tich;
}

PhanSo PhanSo::operator/(int n)
{
	int tu = iTu * 1;
	int mauchung = iMau * n;
	int gcd = UCLN(tu, mauchung);

	PhanSo thuong;

	if (gcd == 0)
	{
		cout << "Khong the chia het cho 0" << endl;
		return thuong;
	}

	thuong.iTu = tu / gcd;
	thuong.iMau = mauchung / gcd;

	return thuong;
}

PhanSo PhanSo::operator/(const PhanSo ps)
{
	int tu = iTu * ps.iMau;
	int mauchung = iMau * ps.iTu;
	int gcd = UCLN(tu, mauchung);

	PhanSo thuong;

	if (gcd == 0)
	{
		cout << "Khong the chia het cho 0" << endl;
		return thuong;
	}

	thuong.iTu = tu / gcd;
	thuong.iMau = mauchung / gcd;

	return thuong;
}

bool PhanSo::operator==(int n)
{
	return (iTu == n) && (iMau == 1);
}

bool PhanSo::operator==(const PhanSo ps)
{
	return (iTu == ps.iTu) && (iMau == ps.iMau);
}

bool PhanSo::operator!=(int n)
{
	return (iTu != n) || (iMau != 1);
}

bool PhanSo::operator!=(const PhanSo ps)
{
	return (iTu != ps.iTu) || (iMau != ps.iMau);
}

bool PhanSo::operator!()
{
	return iTu == 0;
}

PhanSo operator+(int n, PhanSo ps)
{
	int tu1 = n * ps.iMau;
	int tu2 = 1 * ps.iTu;

	int mauchung = 1 * ps.iMau;
	int gcd = UCLN(tu1 + tu2, mauchung);

	PhanSo tong;
	tong.iTu = (tu1 + tu2) / gcd;
	tong.iMau = mauchung / gcd;

	return tong;
}

PhanSo operator-(int n, PhanSo ps)
{
	int tu1 = n * ps.iMau;
	int tu2 = 1 * ps.iTu;

	int mauchung = 1 * ps.iMau;
	int gcd = UCLN(tu1 - tu2, mauchung);

	PhanSo hieu;
	hieu.iTu = (tu1 - tu2) / gcd;
	hieu.iMau = mauchung / gcd;

	return hieu;
}

PhanSo operator*(int n, PhanSo ps)
{
	int tu = n * ps.iTu;
	int mauchung = 1 * ps.iMau;
	int gcd = UCLN(tu, mauchung);

	PhanSo tich;
	tich.iTu = tu / gcd;
	tich.iMau = mauchung / gcd;

	return tich;
}

PhanSo operator/(int n, PhanSo ps)
{
	int tu = n * ps.iMau;
	int mauchung = 1 * ps.iTu;
	int gcd = UCLN(tu, mauchung);

	PhanSo thuong;

	if (gcd == 0)
	{
		cout << "Khong the chia het cho 0" << endl;
		return thuong;
	}

	thuong.iTu = tu / gcd;
	thuong.iMau = mauchung / gcd;

	return thuong;
}

bool operator==(int n, const PhanSo ps)
{
	return (n == ps.iTu) && (1 == ps.iMau);
}

bool operator!=(int n, const PhanSo ps)
{
	return (n != ps.iTu) || (1 != ps.iMau);
}

istream& operator>>(istream& is, PhanSo& ps)
{
	do
	{
		cout << "Nhap phan so (mau khac 0): ";
		is >> ps.iTu >> ps.iMau;
	} 
	while (ps.iMau == 0);

	int gcd = UCLN(ps.iTu, ps.iMau);
	ps.iTu = ps.iTu / gcd;
	ps.iMau = ps.iMau / gcd;

	return is;
}

ostream& operator<<(ostream& os, PhanSo ps)
{
	if (ps.iTu % ps.iMau == 0.0)
		os << ps.iTu / ps.iMau;
	else
		os << ps.iTu << "/" << ps.iMau;

	return os;
}
