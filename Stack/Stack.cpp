#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> FamilyMembers;

    FamilyMembers.push("Moahmmad");
    FamilyMembers.push("Afia");
    FamilyMembers.push("Shariefa");
    FamilyMembers.push("Salem");
    FamilyMembers.push("Zienah");
    FamilyMembers.push("Saleh");
    FamilyMembers.push("Samiah");

    cout << "The family members size is : " << FamilyMembers.size() << endl;

    cout << "\nMembers are : \n";
    while (!FamilyMembers.empty())
    {
        cout << FamilyMembers.top() << endl;

        FamilyMembers.pop();
    }
}
