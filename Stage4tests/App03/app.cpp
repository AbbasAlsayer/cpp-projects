#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int &A, int &B, int &C)
{
    cout << "enter number 1? \n";
    cin >> A;

    cout << "enter number 2? \n";
    cin >> B;

    cout << "enter number 3? \n";
    cin >> C;
}
 int MaxOf3Numbers(int A, int B, int C)
    {
        if(A > B)
            if(A > C)
                 return A;
             else 
                 return C;
        else 
            if(B > C)
                return B;
            else 
            return C;

    }

void PrintResults(int Max)
{
    
    cout << "\n The Max Number is: " << Max << endl;
}
int main()
{
    int A, B, C;
    ReadNumbers(A, B, C);
    PrintResults(MaxOf3Numbers(A, B, C)); 

    return 0;
}
