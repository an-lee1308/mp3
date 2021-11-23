#include "TamGiac.h"

int main()
{
	TamGiac ABC;

	ABC.NhapTamGiac();
	ABC.XuatTamGiac();
	ABC.VeTamGiac();

	ABC.TinhTienTamGiac(50, 50);
	ABC.XuatTamGiac();
	ABC.VeTamGiac();

	ABC.ThuPhongTamGiac(2);
	ABC.XuatTamGiac();

	ABC.QuayTamGiac(180);
	ABC.XuatTamGiac();

	cout << endl;
	system("pause");
	return 0;
}