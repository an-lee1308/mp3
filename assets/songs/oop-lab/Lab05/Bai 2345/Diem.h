#pragma once
#define _CRT_SECURE_NO_WARNINGS // để dùng hàm strcat

#include <iostream>
#include <string.h>
#include "Do Hoa\graphics.h"

using namespace std;

class Diem
{
	private:
		double x;
		double y;

	public:
		Diem();
		Diem(double, double);

		double LayHoanhDo();
		double LayTungDo();
		void TaoToaDo(double, double);

		void NhapDiem();
		void XuatDiem();

		void VeDiem();
		void TinhTien(double, double);
		void Quay(double);
};

