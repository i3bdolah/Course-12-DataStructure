#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* next;
};

void InsertAtBeginning(Node*& Head, int value) {
	Node* NewNode = new Node();

	NewNode->value = value;
	NewNode->next = Head;

	Head = NewNode;
}

void PrintLinkedList(Node* Head) {
	while (Head != NULL)
	{
		cout << Head->value << endl;
		Head = Head->next;
	}
}

Node* Find(Node* head, int value) {
	while (head != NULL)
	{
		if (head->value == value)
			return head;

		head = head->next;
	}

	return NULL;
}

void InsertAfter(Node*& PrevNode, int NewNodeValue) {
	Node* NewNode = new Node();

	NewNode->next = PrevNode->next;
	NewNode->value = NewNodeValue;

	PrevNode->next = NewNode;
}

void InsertAtEnd(Node*& Head, int value) {
	Node* NewNode = new Node();
	NewNode->value = value;
	NewNode->next = NULL;

	if (Head == NULL)
	{
		Head = NewNode;
		return;
	}

	Node* LastNode = Head; // To prevent changing the Head
	while (LastNode->next != NULL)
	{
		LastNode = LastNode->next;
	}
	LastNode->next = NewNode;
}

void DeleteNode(Node*& Head, int value) {
	Node* Current = Head, * Prev = Head;

	if (Head == NULL) return;

	if (Current->value == value)
	{
		Head = Current->next;
		delete Current;
		return;
	}

	while (Current != NULL && Current->value != value)
	{
		Prev = Current;
		Current = Current->next;
	}

	if (Current == NULL) return;

	Prev->next = Current->next;
	delete Current;
}

void DeleteFirstNode(Node*& Head) {
	if (Head == NULL) return;

	Node* Current = Head;
	Head = Current->next;
	delete Current;
}

void DeleteLastNode(Node*& Head) {
	Node* Current = Head, * Prev = Head;

	if (Head == NULL) return;

	if (Current->next == NULL)
	{
		Head = NULL;
		delete Current;
		return;
	}

	while (Current->next != NULL)
	{
		Prev = Current;
		Current = Current->next;
	}

	Prev->next = NULL;
	delete Current;
}

int main()
{
	Node* Head = NULL;
	InsertAtEnd(Head, 1);
	InsertAtEnd(Head, 2);
	InsertAtEnd(Head, 3);
	InsertAtEnd(Head, 4);

	DeleteFirstNode(Head);
	DeleteLastNode(Head);

	PrintLinkedList(Head);

}