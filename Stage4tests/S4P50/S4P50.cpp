#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;
    return PinCode;
}

bool Login()
{
    string PinCode;
    int Counter = 3;

    do 
    {
        Counter--;
        PinCode = ReadPinCode();

        if(PinCode == "1234")
        {
            return 1; //this'll exit the function and return
        }
        else
        {
            system("color 4F"); //turn screen to Red
            cout << "\nWrong PIN, you have " << Counter << "more tries" << endl;
        }
    }while (Counter >= 1 && PinCode != "1234");

    return 0; //when you reach here this mean login failed
}

int main()
{
    if(Login())
    {
        system("color 2F"); //terun screen to green
        cout << "\nYour acount balance is " << 7500 << endl;
    }
    else 
    {
        cout << "\nYour card blocked call the bank for help. \n";
    } 

return 0;
}