#include "ConNguoi.h"

void ConNguoi::NhapThongTin()
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	cin.getline(HoTen, 20); 
	
	cout << "Nhap ngay thang nam sinh: "; 
	cin >> Ngay >> Thang >> Nam; 
}

void ConNguoi::XuatThongTin()
{
	cout << "\nHo ten: " << HoTen; 
	cout << "\nNgay thang nam sinh: " << Ngay << "/" << Thang << "/" << Nam;
}
