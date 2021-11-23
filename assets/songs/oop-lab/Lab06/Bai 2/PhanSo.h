#pragma once
#include <iostream>
using namespace std;

int UCLN(int, int);

class PhanSo
{
	private:
		int iTu;
		int iMau;
		

	public:
		PhanSo();

		PhanSo operator +(int);
		PhanSo operator +(const PhanSo);
		friend PhanSo operator +(int, PhanSo);

		PhanSo operator -(int);
		PhanSo operator -(const PhanSo);
		friend PhanSo operator -(int, PhanSo);

		PhanSo operator *(int);
		PhanSo operator *(const PhanSo);
		friend PhanSo operator *(int, PhanSo);

		PhanSo operator /(int);
		PhanSo operator /(const PhanSo);
		friend PhanSo operator /(int, PhanSo);

		bool operator ==(int);
		bool operator ==(const PhanSo);
		friend bool operator ==(int, const PhanSo);

		bool operator !=(int);
		bool operator !=(const PhanSo);
		friend bool operator !=(int, const PhanSo);

		bool operator !();

		friend istream& operator >>(istream&, PhanSo&);
		friend ostream& operator <<(ostream&, PhanSo);
};

