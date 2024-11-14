#include <iostream>
#include <string>

using namespace std;

//void PrintName(string Name)
//{
//    cout << "\n Your Name Is: " << Name << endl;
//}
//
//string ReadName()
//{
//    string Name;
//    cout << "Your Name? \n";
//    getline(cin, Name);
//    return Name;
//}

enum EnNumberType{Odd = 1 , Even = 2};

int ReadNumber()
{
    int Num;

    cout << "Enter Your Number ?\n";
    cin >> Num;
    return Num;
}

EnNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
    {
        return EnNumberType::Odd;
    }
    else {
        return EnNumberType::Even;
    }
}

void PrintNumType(EnNumberType NumberType)
{
    if (NumberType == EnNumberType::Even)
    {
        cout << "\n Your Number is Even. \n";
    }
    else {
        cout << "\n Your Number is Odd. \n";
    }
}

int main()
{
    //PrintName("Ahmed Shaaban Al-Saidi");
    //PrintName(ReadName());

    PrintNumType(CheckNumberType(ReadNumber()));
    return 0;
}
