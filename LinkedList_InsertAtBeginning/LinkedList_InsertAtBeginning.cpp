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

int main()
{
	Node* Head = NULL;

	InsertAtBeginning(Head, 1);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 5);

	PrintLinkedList(Head);
}