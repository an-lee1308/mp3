#include "Candidate.h"

void Candidate::NhapThiSinh()
{
	cin.ignore();

	cout << "- Ma so thi sinh: ";
	cin.getline(cMaThiSinh, 15);

	cout << "- Ho ten thi sinh: ";
	cin.getline(cTenThiSinh, 20);

	cout << "- Ngay thang nam sinh: ";
	cin >> iNgay >> iThang >> iNam;

	cout << "- Diem Toan: ";
	cin >> diemToan;

	cout << "- Diem Van: ";
	cin >> diemVan;

	cout << "- Diem Anh: ";
	cin >> diemAnh;
}

void Candidate::XuatThiSinh()
{
	cout << "- Ma so thi sinh: " << cMaThiSinh << endl;
	cout << "- Ho ten thi sinh: " << cTenThiSinh << endl;
	cout << "- Ngay thang nam sinh: " << iNgay << " / " << iThang << " / " << iNam << endl;
	cout << "- Diem Toan: " << diemToan << endl;
	cout << "- Diem Van: " << diemVan << endl;
	cout << "- Diem Anh: " << diemAnh << endl;
}

double Candidate::TinhTongDiem()
{
	double TongDiem;

	TongDiem = diemToan + diemAnh + diemVan;
	return TongDiem;
}
