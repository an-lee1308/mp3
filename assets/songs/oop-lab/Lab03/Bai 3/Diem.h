#pragma once
#define _CRT_SECURE_NO_WARNINGS // để dùng hàm strcat

#include <iostream>
#include <string.h>
#include "Do Hoa/graphics.h"
#pragma comment(lib, "graphics.lib")
using namespace std;

class Diem
{
	private:
		float HoanhDo;
		float TungDo;

	public:
		Diem(void); // Hàm khởi tạo mặc định
		Diem(float, float); // Hàm khởi tạo tham số
		Diem(const Diem&); // Hàm khởi tạo sao chép
		~Diem(void); // Hàm hủy

		float LayHoanhDo();
		float LayTungDo();

		void TaoHoanhDo(float);
		void TaoTungDo(float);

		void NhapDiem();
		void XuatDiem();

		void TinhTien(float, float);
		void VeDiem();

		void Quay(float);
};