#include "Stack.h"

Stack::Stack()
{
	Top = NULL;
}

Stack::~Stack()
{
	Node* p;

	while (Top != NULL)
	{
		p = Top; // Cho con trỏ p trỏ vào Top
		Top = Top -> pNext; // Top được trỏ sang Node bên cạnh
		delete p; // Giải phóng con trỏ
	}
}

int Stack::LayTop()
{
	return Top -> Data;
}

bool Stack::KiemTraStackRong()
{
	if (Top == NULL)
		return true;
	return false;
}

// Thêm Node p vào Stack
void Stack::Push(Node* p)
{
	if (p == NULL)
		return;

	// Trường hợp danh sách không có gì => p là Node duy nhất
	if (Top == NULL)
		Top = p;
	else
	{
		p -> pNext = Top;
		Top = p;
	}
}

// Pop (xóa đầu Stack)
void Stack::Pop()
{
	Node* p = Top; // Cho 1 con trỏ p trỏ tới Top
	Top = Top -> pNext; // Cập nhật lại Top là Node kế tiếp
	delete p;
}

void Stack::NhapStack()
{
	int SoNode; // số lượng Node cần nhập
	cout << "Nhap vao so luong Node: ";
	cin >> SoNode;
	cout << endl;

	for (int i = 1; i <= SoNode; i++)
	{
		int DATA;
		cout << "Nhap vao Node thu " << i << ": ";
		cin >> DATA;

		Node* p = new Node;
		p -> GetNode(DATA); // Bỏ DATA vào trong Node
		Push(p); // Bỏ Node p vào trong Stack
	}
	cout << endl;
}

// OutPut cũng đồng thời giải phóng khi lấy ra từng Node
void Stack::XuatStack()
{
	// Vòng lặp sẽ lặp liên tục khi mà Stack không bị rỗng
	while (!KiemTraStackRong())
	{
		int DATA = LayTop(); // Gán data của top sang DATA
		Pop(); // Delete top đi

		if (!KiemTraStackRong())
			cout << DATA << " * ";
		else
			cout << DATA;
	}
	cout << endl;
}