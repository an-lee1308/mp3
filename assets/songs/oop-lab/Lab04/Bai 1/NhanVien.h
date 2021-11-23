#pragma once
#include <iostream>
using namespace std;

class NhanVien
{
	protected: 
		char HoTen[20]; 
		int Ngay, Thang, Nam; 
		float Luong, LuongCoBan;

	public: 
		char* LayHoTen();
		void Nhap(); 
		void Xuat(); 
		float TinhLuong();
};

