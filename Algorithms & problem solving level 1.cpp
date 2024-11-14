#include <iostream>
#include <string>

using namespace std;

void PrintName(string Name)
{
    cout << "\n Your Name Is: " << Name << endl;
}

string ReadName()
{
    string Name;
    cout << "Your Name? \n";
    getline(cin, Name);
    return Name;
}

int main()
{
    //PrintName("Ahmed Shaaban Al-Saidi");

    PrintName(ReadName());

    return 0;
}
