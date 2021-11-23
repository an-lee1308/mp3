#pragma once
#include "Node.h"

class Stack
{
	private:
		Node* Top;

	public:
		Stack();
		~Stack();

		int LayTop();
		bool KiemTraStackRong();
		
		void Push(Node*);
		void Pop();

		void NhapStack();
		void XuatStack();
};

