#include "DaThuc.h"

void XuatMu(int i) 
{
	if (i == 1)
		cout << "x";

	if (i > 1)  
		cout << "x^" << i;
}

istream& operator>>(istream& input, DaThuc& dathuc)
{
	cout << "Nhap cac he so cua da thuc bac " << dathuc.BacDaThuc << ": ";

	for (int i = dathuc.BacDaThuc; i >= 0 ; i--)
		input >> dathuc.HeSo[i];
	return input;
}

ostream& operator<<(ostream & output, const DaThuc & dathuc)
{
	int i = dathuc.BacDaThuc;

	output << dathuc.HeSo[i];
	XuatMu(i);

	while (i-- > 0)
	{
		if (dathuc.HeSo[i] > 0)
		{
			output << " + " << dathuc.HeSo[i];
			XuatMu(i);
		}

		if (dathuc.HeSo[i] < 0)
		{
			output << " - " << -dathuc.HeSo[i];
			XuatMu(i);
		}
	}
	return output;
}

DaThuc::DaThuc(int bac)
{
	BacDaThuc = bac;
	HeSo = new int[BacDaThuc + 1];

	for (int i = 0; i <= BacDaThuc; i++)
		HeSo[i] = 0;
}

DaThuc::DaThuc(const DaThuc& dathuc)
{
	BacDaThuc = dathuc.BacDaThuc;
	HeSo = new int[BacDaThuc + 1];

	for (int i = 0; i <= BacDaThuc; i++)
		HeSo[i] = dathuc.HeSo[i];
}

DaThuc::~DaThuc()
{
	if (HeSo != NULL)
		delete[] HeSo;
}

const DaThuc& DaThuc::operator=(const DaThuc& dathuc)
{
	if (*this != dathuc)
	{
		if (BacDaThuc != dathuc.BacDaThuc)
		{
			delete[] HeSo;
			BacDaThuc = dathuc.BacDaThuc;
			HeSo = new int[BacDaThuc];
		}

		for (int i = 0; i <= BacDaThuc; i++)
			HeSo[i] = dathuc.HeSo[i];
	}
	return (*this);
}

bool DaThuc::operator==(const DaThuc& dathuc)
{
	if (BacDaThuc != dathuc.BacDaThuc) 
		return false;
	else 
		for (int i = 0; i <= BacDaThuc; i++)
			if (HeSo[i] != dathuc.BacDaThuc) 
				return false;
	return true;
}

bool DaThuc::operator!=(const DaThuc& dathuc)
{
	return !(*this == dathuc);
}

DaThuc DaThuc::operator+(const DaThuc& cong)
{
	int temp;
	temp = ((BacDaThuc > cong.BacDaThuc) ? BacDaThuc : cong.BacDaThuc);

	DaThuc d(temp);
	for (int i = 0; i <= temp; i++)
	{
		if (BacDaThuc >= i && cong.BacDaThuc >= i) 
			d.HeSo[i] = HeSo[i] + cong.HeSo[i];
		else if (cong.BacDaThuc < i) 
			d.HeSo[i] = HeSo[i];
		else if (BacDaThuc < i) 
			d.HeSo[i] = cong.HeSo[i];
	}

	while (temp > 0 && d.HeSo[temp] == 0)
		temp--;

	d.BacDaThuc = temp;
	return d;
}

DaThuc DaThuc::operator-(const DaThuc& tru)
{
	int i;
	int temp = (BacDaThuc > tru.BacDaThuc) ? BacDaThuc : tru.BacDaThuc;

	DaThuc d(temp);
	for (i = 0; i <= temp; i++)
	{
		if (BacDaThuc >= i && tru.BacDaThuc >= i) 
			d.HeSo[i] = HeSo[i] - tru.HeSo[i];
		else if (tru.BacDaThuc < i) 
			d.HeSo[i] = HeSo[i];
		else if (BacDaThuc < i) 
			d.HeSo[i] = tru.HeSo[i];
	}
	return d;
}

DaThuc DaThuc::operator*(const DaThuc& nhan)
{
	int temp;
	temp = BacDaThuc + nhan.BacDaThuc;

	DaThuc d(temp);
	for (int i = 0; i <= BacDaThuc; i++)
		for (int j = 0; j <= nhan.BacDaThuc; j++)
			d.HeSo[i + j] = d.HeSo[i + j] + HeSo[i] * nhan.HeSo[j];
	return d;
}

DaThuc DaThuc::operator/(const DaThuc& chia)
{
	int temp;

	if (BacDaThuc < chia.BacDaThuc) 
		return 0;

	temp = BacDaThuc - chia.BacDaThuc;

	DaThuc d(temp);
	DaThuc temp1(*this);

	for (int i = BacDaThuc; i >= chia.BacDaThuc; i--, temp--)
	{
		d.HeSo[i - chia.BacDaThuc] = temp1.HeSo[i] / chia.HeSo[chia.BacDaThuc];

		if (i - 1 >= chia.BacDaThuc)
		{
			for (int j = i - 1, k = chia.BacDaThuc - 1; k >= 0; j--, k--)
				temp1.HeSo[j] -= d.HeSo[i - chia.BacDaThuc] * chia.HeSo[k];
		}
	}
	return d;
}

DaThuc DaThuc::TinhDaoHamCap1()
{
	DaThuc DaoHam(BacDaThuc - 1);

	// hệ số của đa thức kết quả
	for (int i = BacDaThuc; i > 0; i--)
		DaoHam.HeSo[i - 1] = HeSo[i] * i;
	return DaoHam;
}

DaThuc DaThuc::TinhDaoHamCapk(int k)
{
	DaThuc DaoHam(BacDaThuc - k);
	DaoHam = this -> TinhDaoHamCap1();

	for (int i = 0; i < k; i++)
		DaoHam = DaoHam.TinhDaoHamCap1();
	return DaoHam;
}
