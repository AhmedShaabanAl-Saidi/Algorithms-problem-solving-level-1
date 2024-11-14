#include <iostream>
#include <string>

using namespace std;

// Read And Prind Name
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

// Even or Odd
//enum enNumberType{Odd = 1 , Even = 2};
//
//int ReadNumber()
//{
//    int Num;
//
//    cout << "Enter Your Number ?\n";
//    cin >> Num;
//    return Num;
//}
//
//enNumberType CheckNumberType(int Num)
//{
//    int Result = Num % 2;
//    if (Result == 0)
//    {
//        return enNumberType::Odd;
//    }
//    else {
//        return enNumberType::Even;
//    }
//}
//
//void PrintNumType(enNumberType NumberType)
//{
//    if (NumberType == enNumberType::Even)
//    {
//        cout << "\n Your Number is Even. \n";
//    }
//    else {
//        cout << "\n Your Number is Odd. \n";
//    }
//}

// HiredADriver
struct stInfo
{
    int Age;
    bool HasDrivingLincense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter Your Age ?\n";
    cin >> Info.Age;

    cout << "Do You Have A Driver Lincense 0 or 1 ?\n";
    cin >> Info.HasDrivingLincense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age >= 21 && Info.HasDrivingLincense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    {
        cout << "\n Hired\n";
    }
    else {
        cout << "\n Rejected\n";
    }
}

int main()
{
    //PrintName("Ahmed Shaaban Al-Saidi");
    //PrintName(ReadName());

    //PrintNumType(CheckNumberType(ReadNumber()));

    PrintResult(ReadInfo());
    return 0;
}
