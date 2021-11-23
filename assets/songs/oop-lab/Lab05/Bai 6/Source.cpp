#include "Bo.h"
#include "Cuu.h"
#include "De.h"

int main()
{
	Bo SoBo;
	Cuu SoCuu;
	De SoDe;

	SoBo.NhapSLBD();
	SoCuu.NhapSLBD();
	SoDe.NhapSLBD();
	
	SoBo.Keu();
	SoCuu.Keu();
	SoDe.Keu();

	cout << "\nSo bo hien tai trong nong trai: " << SoBo.SinhCon();
	cout << "\nSo cuu hien tai trong nong trai: " << SoCuu.SinhCon();
	cout << "\nSo de hien tai trong nong trai: " << SoDe.SinhCon();

	int TongSoLitSua = SoBo.ChoSua() + SoCuu.ChoSua() + SoDe.ChoSua();
	cout << "\nTong so lit sua cua tat ca gia suc: " << TongSoLitSua;

	system("pause");
	return 0;
}