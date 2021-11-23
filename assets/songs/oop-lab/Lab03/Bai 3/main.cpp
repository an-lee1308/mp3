#include "DaGiac.h"

int main()
{
	DaGiac Poly;

	Poly.NhapDaGiac();
	Poly.XuatDaGiac();
	Poly.VeDaGiac();

	Poly.TinhTienDaGiac(50, 50);
	Poly.XuatDaGiac();
	Poly.VeDaGiac();

	Poly.ThuPhongDaGiac(2);
	Poly.XuatDaGiac();

	Poly.QuayDaGiac(180);
	Poly.XuatDaGiac();

	cout << endl;
	system("pause");
	return 0;
}