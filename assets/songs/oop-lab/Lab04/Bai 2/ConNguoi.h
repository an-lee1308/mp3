#pragma once
#include <iostream>
using namespace std;

class ConNguoi
{
	private:
		char HoTen[20];
		int Ngay, Thang, Nam;

	public:
		virtual void NhapThongTin();
		virtual void XuatThongTin();
};

