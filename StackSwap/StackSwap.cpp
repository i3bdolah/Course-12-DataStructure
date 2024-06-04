#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack <string> FamilyMembers1;
	stack <string> FamilyMembers2;

	FamilyMembers1.push("Moahmmad");
	FamilyMembers1.push("Afia");
	FamilyMembers2.push("Shariefa");
	FamilyMembers2.push("Salem");
	FamilyMembers2.push("Zienah");
	FamilyMembers2.push("Saleh");
	FamilyMembers2.push("Samiah");



	//cout << "\nMembers Part 1 are : \n";
	//while (!FamilyMembers1.empty())
	//{
	//	cout << FamilyMembers1.top() << endl;

	//	FamilyMembers1.pop();
	//}

	//cout << "\nMembers Part 2 are : \n";
	//while (!FamilyMembers2.empty())
	//{
	//	cout << FamilyMembers2.top() << endl;

	//	FamilyMembers2.pop();
	//}

	cout << "FamilyMembers1 Address : " << &FamilyMembers1 << endl;
	cout << "FamilyMembers2 Address : " << &FamilyMembers2 << endl;

	FamilyMembers1.swap(FamilyMembers2);

	cout << "FamilyMembers1 Address : " << &FamilyMembers1 << endl;
	cout << "FamilyMembers2 Address : " << &FamilyMembers2 << endl;

	cout << "\nMembers Part 1 are : \n";
	while (!FamilyMembers1.empty())
	{
		cout << FamilyMembers1.top() << endl;

		FamilyMembers1.pop();
	}

	cout << "\nMembers Part 2 are : \n";
	while (!FamilyMembers2.empty())
	{
		cout << FamilyMembers2.top() << endl;

		FamilyMembers2.pop();
	}
}