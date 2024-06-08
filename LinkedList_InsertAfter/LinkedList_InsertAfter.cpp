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

int main()
{
	Node* Head = NULL;
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 1);

	Node* GoalNode = Find(Head, 3);
	InsertAfter(GoalNode, 500);

	PrintLinkedList(Head);
}