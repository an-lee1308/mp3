#include "Stack.h"

bool LaSoNguyenTo(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	Stack DanhSachSo;
	int SoBiChia, SoNguyenTo;
	int n;

	cout << "Nhap so can phan tich: ";
	cin >> n;

	SoBiChia = n;
	SoNguyenTo = 0;

	for (int i = 2; i <= n; i++)
	{
		if (LaSoNguyenTo(i))
		{
			while (SoBiChia != 1)
			{
				if (SoBiChia % i == 0)
				{
					SoBiChia = SoBiChia / i;
					SoNguyenTo = i;

					Node* p = new Node;
					p -> GetNode(SoNguyenTo);
					DanhSachSo.Push(p);
				}
				else 
					break;
			}
		}
	}

	cout << n << " = ";
	DanhSachSo.XuatStack();

	system("pause");
	return 0;
}