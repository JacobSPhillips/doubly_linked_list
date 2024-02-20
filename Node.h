#pragma once
class Node
{
public:
	int data;
	Node* next;
	Node* prev;

	Node()
	{
		data = 0;
		next = nullptr;
		prev = nullptr;
	}

	Node(int data)
	{
		this->data = data;
		this->next = nullptr;
		this->prev = nullptr;
	}

	Node(int data, Node* next)
	{
		this->data = data;
		this->next = next;
		this->prev = prev;
	}



	/*Node() : data(0), next(nullptr) {}
	Node(int data) : data(data), next(nullptr) {}
	Node(int data, Node *next): data(data), next(next){} */
};

