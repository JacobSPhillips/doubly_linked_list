#pragma once
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;
class LinkedList
{
private:
	Node* head;
	Node* tail;

public:
	LinkedList();
	~LinkedList();

	void append(int data);
	void prepend(int data);
	bool search(int data);
	bool remove(int data);

	bool tailremove(int data);

	void display(ostream& os);
	void taildisplay(ostream& os);

	friend ostream& operator<<(ostream& os, LinkedList& right);

};

