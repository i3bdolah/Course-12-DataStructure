#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <string> MacDonaldLine;

	MacDonaldLine.push("Abdullah");
	MacDonaldLine.push("Mohannad");
	MacDonaldLine.push("Talal");
	MacDonaldLine.push("Nyaar");

	cout << "Queue Information : ";
	cout << "\n Size  = " << MacDonaldLine.size();
	cout << "\n Front = " << MacDonaldLine.front();
	cout << "\n Back  = " << MacDonaldLine.back();

	cout << "\n\n\n MacDonald Queue  :- ";

	while (!MacDonaldLine.empty())
	{
		cout << "\n - " << MacDonaldLine.front();

		MacDonaldLine.pop();
	}
}