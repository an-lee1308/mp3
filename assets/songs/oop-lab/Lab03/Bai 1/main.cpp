#include "Diem.h"

int main()
{

	Diem d1(100, 200);
	Diem d2(50, 80);
	Diem d3; // (0, 0)
	Diem d4(d1); // (100, 200)

	cout << "\nd1";
	d1.XuatDiem();

	cout << "\nd2";
	d2.XuatDiem();

	cout << "\nd3";
	d3.TinhTien(25, 45);
	d3.XuatDiem();

	cout << "\nd4";
	d4.XuatDiem();
	d4.VeDiem();

	cout << endl;
	system("pause");
	return 0;
}