#pragma once
#include <iostream>
using namespace std;
class Sach
{
	protected:
		char TenSach[20];
		int GiaTien;

	public:
		virtual void Nhap();
		virtual void Xuat();
};

