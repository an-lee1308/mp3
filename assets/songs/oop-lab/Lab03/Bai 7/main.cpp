#include "Stack.h"

void DoiHe(Stack& DanhSachSo, int SoCanDoi, int HeCanDoi)
{
	while (SoCanDoi != 0)
	{
		int DATA = SoCanDoi % HeCanDoi;
		SoCanDoi /= HeCanDoi;

		Node* p = new Node;
		p -> GetNode(DATA);
		DanhSachSo.Push(p);
	}
}

int main()
{
	Stack DanhSachSo;

	DoiHe(DanhSachSo, 2566, 16);
	DanhSachSo.XuatStack();

	system("pause");
	return 0;
}