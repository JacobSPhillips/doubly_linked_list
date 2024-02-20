#include "LinkedList.h"


LinkedList::~LinkedList()
{
	Node* temp = head; //set the temp to the head of the list

	while (temp != nullptr) // loop while there are nodes in the list
	{
		head = head->next; //move the head to the next node

		delete temp; // deletes the node that temp held onto

		temp = head; // reassign temp to head
	}

	tail = nullptr; // set tail to nullptr
}


ostream& operator<<(ostream& os, LinkedList& right)
{
	right.display(os); // call the display method for the linkedList

	return os; // return the updated ostream 
}

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

void LinkedList::append(int data)
{
	Node *temp = new Node(data); // create a new node
	temp->prev = tail;

	if (head == nullptr) // if the list is empty
	{
		head = temp; // set the head to the new node
	}

	else // in every other case
	{
		tail->next = temp; // set the tail next to be the new node
	}

	tail = temp;
}

void LinkedList::prepend(int data)
{
	Node* temp = new Node(data);
	temp->next = head;

	if (head == nullptr)
	{
		tail = temp;
	}
	else
	{
		head->prev = temp;
	}
	temp->next = head;
	head = temp;
}



bool LinkedList::search(int data)
{
	Node* temp = head; // set the current node to the head

	while (temp != nullptr) // loop through entire list
	{
		if (temp->data == data) return true; // if the data is stored in the current node, return true

		temp = temp->next; // move temp to the next node
	}

	return false;

}

bool LinkedList::remove(int data)
{


	Node* temp = head; // set a node to head
	//Node* prev = nullptr; // set a prev node to null ptr
							// the head doesn't have a previous node so we make one
	
	while (temp != nullptr) // loop through the whole list
	{
		if (temp->data == data) // if we found the node we are looking for
		{
			if (temp->prev != nullptr)
			{
				temp->prev->next = temp->next;
			}
			if (temp->next != nullptr)
			{
				temp->next->prev = temp->prev;
			}
			if (temp == head) // if that node is the head
			{
				head = temp->next; // set head to the node after
			}
			/*else // checking if we are deleting the tail
			{
				prev->next = temp->next; // if so, we are setting the tail to be the prev node
			}*/
			if (temp == tail)
			{
				tail = temp->prev; // set the previous node's next to be the temp's next
			}

			delete temp; // delete the current node

			return true; // good job
		}
		//prev = temp;
		temp = temp->next;
	}
	return false;
}

void LinkedList::display(ostream& os)
{
	Node* temp = head; // set the node to the head

	while (temp != nullptr)
	{
		os << temp->data << " "; // output the data stored in the current node and end the line

		temp = temp->next;
	}
	os << endl;
}

bool LinkedList::tailremove(int data)
{
	Node* temp = tail; // set a node to head
	//Node* prev = nullptr; // set a prev node to null ptr
							// the head doesn't have a previous node so we make one

	while (temp != nullptr) // loop through the whole list
	{
		if (temp->data == data) // if we found the node we are looking for
		{
			if (temp->prev != nullptr)
			{
				temp->prev->next = temp->next;
			}
			if (temp->next != nullptr)
			{
				temp->next->prev = temp->prev;
			}
			if (temp == head) // if that node is the head
			{
				head = temp->next; // set head to the node after
			}
			/*else // checking if we are deleting the tail
			{
				prev->next = temp->next; // if so, we are setting the tail to be the prev node
			}*/
			if (temp == tail)
			{
				tail = temp->prev; // set the previous node's next to be the temp's next
			}

			delete temp; // delete the current node

			return true; // good job
		}
		//prev = temp;
		temp = temp->prev;
	}
	return false;
}

void LinkedList::taildisplay(ostream& os)
{
	Node* temp = tail; // set the node to the head

	while (temp != nullptr)
	{
		os << temp->data << " "; // output the data stored in the current node and end the line

		temp = temp->prev;
	}
	os << endl;
}

