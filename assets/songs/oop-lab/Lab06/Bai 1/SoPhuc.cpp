#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	dThuc = dAo = 0;
}

SoPhuc SoPhuc::operator +(const SoPhuc n)
{
	SoPhuc tong;
	tong.dThuc = dThuc + n.dThuc;
	tong.dAo = dAo + n.dAo;

	return tong;
}

SoPhuc SoPhuc::operator -(const SoPhuc n)
{
	SoPhuc hieu;

	hieu.dThuc = dThuc - n.dThuc;
	hieu.dAo = dAo - n.dAo;

	return hieu;
}

SoPhuc SoPhuc::operator *(const SoPhuc n)
{
	SoPhuc tich;

	tich.dThuc = (dThuc * n.dThuc) - (dAo * n.dAo);
	tich.dAo = (dAo * n.dThuc) + (dThuc * n.dAo);

	return tich;
}

SoPhuc SoPhuc::operator /(const SoPhuc n)
{
	SoPhuc thuong;

	double tuThuc = (dThuc * n.dThuc) + (dAo * n.dAo);
	double mauThuc = (n.dThuc * n.dThuc) + (n.dAo * n.dAo);

	double tuAo = (n.dThuc * dAo) - (dThuc * n.dAo);
	double mauAo = (n.dThuc * n.dThuc) + (n.dAo * n.dAo);

	if (mauThuc == 0 || mauAo == 0)
	{
		cout << "Khong the chia het cho 0" << endl;
		return thuong;
	}

	thuong.dThuc = tuThuc / mauThuc;
	thuong.dAo = tuAo / mauAo;

	return thuong;
}

bool SoPhuc::operator==(const SoPhuc n)
{
	return (dThuc == n.dThuc) && (dAo == n.dAo);
}

bool SoPhuc::operator!=(const SoPhuc n)
{
	return (dThuc != n.dThuc) || (dAo != n.dAo);
}

bool SoPhuc::operator!()
{
	return (dThuc == 0) && (dAo == 0);
}

istream& operator>>(istream& is, SoPhuc& sp)
{
	cout << "Nhap so phuc: ";
	is >> sp.dThuc >> sp.dAo;
	return is;
}

ostream& operator<<(ostream& os, SoPhuc sp)
{
	if (sp.dAo > 0)
		os << sp.dThuc << " + " << sp.dAo << "i";
	else if (sp.dAo < 0)
		os << sp.dThuc << " - " << -sp.dAo << "i";
	else
		os << sp.dThuc;
	return os;
}
