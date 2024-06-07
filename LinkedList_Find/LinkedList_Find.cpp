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

int main()
{
	Node* Head = NULL;

	InsertAtBeginning(Head, 1);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 5);

	PrintLinkedList(Head);

	Node* GoalNode = Find(Head, 2);
	if (GoalNode != NULL)
	{
		cout << "Node Found :)" << endl;
	}
	else
	{
		cout << "Node NOT Found :(" << endl;
	}
}