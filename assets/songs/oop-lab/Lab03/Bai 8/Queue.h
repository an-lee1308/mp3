#pragma once
#include "Node.h"

class Queue
{
	private:
		Node* pHead;
		Node* pTail;

	public:
		Queue();
		~Queue();

		bool KiemTraQueueRong();

		void Push(Node*);
		void Pop();

		void NhapQueue();
		void XuatQueue();
};

