#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* prev;
	Node* next;
};

void PrintDoublyLinkedList(Node* Head) {
	cout << "\n";
	cout << "NULL <--> ";
	while (Head != NULL)
	{
		cout << Head->value << " <--> ";
		Head = Head->next;
	}
	cout << "NULL";
	cout << "\n";
}

void PrintDoublyNode(Node* Head) {
	cout << "\n";
	while (Head != NULL)
	{
		if (Head->prev == NULL)
			cout << "NULL";
		else
			cout << Head->prev->value << "   ";

		cout << " <--> " << Head->value << " <--> ";

		if (Head->next == NULL)
			cout << "NULL";
		else
			cout << Head->next->value << "   " << endl;

		Head = Head->next;
	}
	cout << "\n";
}

void InsertAtBeginning(Node*& Head, int value) {
	Node* NewNode = new Node();

	NewNode->prev = NULL;
	NewNode->value = value;
	NewNode->next = Head;

	if (Head != NULL)
	{
		Head->prev = NewNode;
	}

	Head = NewNode;
}

Node* Find(Node* Head, int value) {
	while (Head != NULL)
	{
		if (Head->value == value)
			return Head;

		Head = Head->next;
	}

	return NULL;
}

void InsertAfter(Node*& PrevNode, int NewNodeValue) {
	Node* NewNode = new Node();

	NewNode->prev = PrevNode;
	NewNode->value = NewNodeValue;
	NewNode->next = PrevNode->next;

	if (PrevNode->next != NULL)
	{
		PrevNode->next->prev = NewNode;
	}
	PrevNode->next = NewNode;
}

void InsertAtEnd(Node*& Head, int value) {
	Node* NewNode = new Node();

	NewNode->value = value;
	NewNode->next = NULL;
	if (Head == NULL)
	{
		NewNode->prev = NULL;
		Head = NewNode;
		return;
	}
	else
	{
		Node* LastNode = Head; // To prevent changes in the head
		while (LastNode->next != NULL)
		{
			LastNode = LastNode->next;
		}
		LastNode->next = NewNode;
		NewNode->prev = LastNode;
	}
}

void DeleteNode(Node*& Head, Node*& NodeToDelete) {

	if (Head == NULL || NodeToDelete == NULL) return;

	if (Head == NodeToDelete) {
		Head = NodeToDelete->next;
	}

	if (NodeToDelete->prev != NULL)
	{
		NodeToDelete->prev->next = NodeToDelete->next;
	}

	if (NodeToDelete->next != NULL)
	{
		NodeToDelete->next->prev = NodeToDelete->prev;
	}

	delete NodeToDelete;
}

int main()
{
	Node* Head = NULL;
	InsertAtEnd(Head, 1);
	InsertAtEnd(Head, 2);
	InsertAtEnd(Head, 3);
	InsertAtEnd(Head, 4);
	InsertAtEnd(Head, 5);

	PrintDoublyLinkedList(Head);

	Node* N = Find(Head, 1);
	DeleteNode(Head, N);

	PrintDoublyLinkedList(Head);
	PrintDoublyNode(Head);
}