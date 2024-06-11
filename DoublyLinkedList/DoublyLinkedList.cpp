#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* prev;
	Node* next;
};

void InsertAtBeginning(Node*& Head, int value) {
	Node* NewNode = new Node();

	NewNode->value = value;
	NewNode->next = Head;

	Head = NewNode;
}

void PrintLinkedList(Node* Head) {
	cout << "\n";
	while (Head != NULL)
	{
		cout << Head->value << " ";
		Head = Head->next;
	}
	cout << "\n";
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

	Node* Node1 = NULL;
	Node* Node2 = NULL;
	Node* Node3 = NULL;

	Node1 = new Node();
	Node2 = new Node();
	Node3 = new Node();

	Node1->value = 1;
	Node2->value = 2;
	Node3->value = 3;

	Node1->prev = NULL;
	Node1->next = Node2;

	Node2->prev = Node1;
	Node2->next = Node3;

	Node3->prev = Node2;
	Node3->next = NULL;


	Head = Node1;
	PrintLinkedList(Head);
}