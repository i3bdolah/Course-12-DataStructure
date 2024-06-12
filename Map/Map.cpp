#include <iostream>
#include <map>
using namespace std;

int main()
{
	map <string, int> StudentsGrades;

	StudentsGrades["Mohammad"] = 100;
	StudentsGrades["Abdullah"] = 99;
	StudentsGrades["Mohammad"] = 0;

	cout << "Printing the Map : \n";
	for (const auto& pair : StudentsGrades)
	{
		cout << "\n___________________________";
		cout << "\nStudent : " << pair.first;
		cout << "\nGrade   : " << pair.second;
		cout << "\n___________________________";
	}


	if (StudentsGrades.find("Abdullah") != StudentsGrades.end())
	{

		cout << "\nFound :)";
		cout << "\nStudent : " << "Abdullah";
		cout << "\nGrade   : " << StudentsGrades["Abdullah"];
	}
	else
	{
		cout << "\nNOT Found :(";
	}

	if (StudentsGrades.find("Fadi") != StudentsGrades.end())
	{

		cout << "\nFound :)";
		cout << "\nStudent : " << "Abdullah";
		cout << "\nGrade   : " << StudentsGrades["Abdullah"];
	}
	else
	{
		cout << "\nNOT Found :(";
	}
}