#include "Queue.h"

Queue::Queue()
{
	pHead = pTail = NULL;
}

Queue::~Queue()
{
	Node* p;

	while (pHead != NULL)
	{
		p = pHead; // Cho con trỏ p trỏ vào pHead
		pHead = pHead -> pNext; // pHead được trỏ sang Node bên cạnh
		delete p; // giải phóng con trỏ
	}
}

bool Queue::KiemTraQueueRong()
{
	return (pHead == NULL);
}

void Queue::Push(Node* p)
{
	if (p == NULL)
		return;

	// Trường hợp danh sách không có gì => p là Node duy nhất
	if (pHead == NULL)
	{
		pHead = p;
		pTail = p;
	}
	else
	{
		pTail -> pNext = p;
		pTail = p;
	}
}

void Queue::Pop()
{
	if (pHead == NULL)
		return;

	Node* p = pHead; // Cho 1 con trỏ p trỏ tới pHead
	pHead = pHead -> pNext; // Cập nhật lại Top là Node kế tiếp
	delete p;
}

void Queue::NhapQueue()
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

void Queue::XuatQueue()
{
	// Vòng lặp sẽ lặp liên tục khi mà Stack không bị rỗng
	while (!KiemTraQueueRong())
	{
		int DATA = pHead -> Data; // Gán data của top sang DATA
		Pop(); // Delete top đi
		cout << DATA << " ";
	}
	cout << endl;
}
