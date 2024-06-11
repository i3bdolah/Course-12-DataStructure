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

int main()
{
	Node* Head = NULL;
	InsertAtBeginning(Head, 5);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 1);

	Node* GoalNode = Find(Head, 5);
	InsertAfter(GoalNode, 500);

	PrintDoublyLinkedList(Head);
	PrintDoublyNode(Head);
}