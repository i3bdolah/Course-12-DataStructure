#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* next;
};

int main()
{
	// Initializing Pointers in the memory
	Node* Node1 = new Node();
	Node* Node2 = new Node();
	Node* Node3 = new Node();
	Node* Head = Node1;

	// Assigning Values
	cout << Head->value << endl;
	Node1->value = 10;
	Node2->value = 20;
	Node3->value = 30;

	// Linking Pointer Addresses
	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = NULL;

	// Printing and Assigning Head to next reference
	while (Head != NULL)
	{
		cout << Head->value << endl;
		Head = Head->next;
	}
}

