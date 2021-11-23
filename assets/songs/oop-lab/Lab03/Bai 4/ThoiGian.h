#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class ThoiGian
{
	private:
		int Gio;
		int Phut;
		int Giay;

	public:
		ThoiGian();
		~ThoiGian();

		int LayGio();
		int LayPhut();
		int LayGiay();

		void TaoGio(int gio);
		void TaoPhut(int phut);
		void TaoGiay(int giay);

		void NhapThoiGian();
		void XuatTheoKhung12Gio();
		void XuatTheoKhung24Gio();
};

