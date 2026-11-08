#include <iostream>
#include <string>
 
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "please enter number 1? \n";
    cin >> num1;

    cout << "Please enter number 2? \n";
    cin >> num2;

}

void Swap(int& num1, int& num2)
{
    int tem;
    tem = num1;
    num1 = num2;
    num2 = tem;
}

void PrintNumbers(int num1, int num2)
{
    cout << "\n Number 1 = " << num1 << endl;
    cout << "\n Number 2 = " << num2 << endl; 
}

int main()
{
    int num1, num2 ;
    ReadNumbers(num1, num2);
    PrintNumbers(num1, num2);
    Swap(num1, num2);
    PrintNumbers(num1, num2);

}

