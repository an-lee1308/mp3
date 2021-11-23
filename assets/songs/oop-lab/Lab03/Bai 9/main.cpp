#include "DaThuc.h"

int main()
{
	DaThuc dathuc1(3), dathuc2(1), daoham(2);
	cin >> dathuc1 >> dathuc2;

	cout << "Phep cong: " << dathuc1 + dathuc2 << endl;
	cout << "Phep tru: " << dathuc1 - dathuc2 << endl;
	cout << "Phep nhan: " << dathuc1 * dathuc2 << endl;
	cout << "Phep chia: " << dathuc1 / dathuc2 << endl;

	cout << "Dao ham cua " << dathuc1 << " la: " << dathuc1.TinhDaoHamCap1() << endl;

	system("pause");
	return 0;
}