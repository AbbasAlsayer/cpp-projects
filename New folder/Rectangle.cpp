 #include <iostream>
 #include <string>
 using namespace std;

 void ReadNumber(float& A, float& B)
 {
    cout << "enter number 1? \n";
    cin >> A;

    cout << "enter number 2? \n";
    cin >> B;  
 }
 float CaculateArea(float A, float B)
 {
    return A*B;
 }
 void PrintResults(float Area)
 {
    cout << "The Rectangle Area is: " << Area << endl;
 }
 int main()
 {
    float A, B;
    ReadNumber(A, B);
    PrintResults(CaculateArea(A, B));

    return 0;
 }