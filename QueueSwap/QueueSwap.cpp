#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <string> SignLine;
	queue <string> MacDonaldLine;

	SignLine.push("Abdullah");
	SignLine.push("Mohannad");
	MacDonaldLine.push("Talal");
	MacDonaldLine.push("Nyaar");

	cout << "Queue Information (SignLine) : ";
	cout << "\n Size  = " << SignLine.size();
	cout << "\n Front = " << SignLine.front();
	cout << "\n Back  = " << SignLine.back();

	cout << "\n\n";

	cout << "Queue Information (MacDonaldLine) : ";
	cout << "\n Size  = " << MacDonaldLine.size();
	cout << "\n Front = " << MacDonaldLine.front();
	cout << "\n Back  = " << MacDonaldLine.back();

	MacDonaldLine.swap(SignLine);

	cout << "\n\n Sign Queue  :- ";
	while (!SignLine.empty())
	{
		cout << "\n - " << SignLine.front();

		SignLine.pop();
	}

	cout << "\n\n MacDonald Queue  :- ";
	while (!MacDonaldLine.empty())
	{
		cout << "\n - " << MacDonaldLine.front();

		MacDonaldLine.pop();
	}

}