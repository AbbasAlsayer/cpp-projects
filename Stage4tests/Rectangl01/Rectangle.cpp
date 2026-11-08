 #include <iostream>
 #include <string>
 #include <cmath>
 using namespace std;

 void ReadNumber(float& A, float& D)
 {
    cout << "enter rectangle side A \n";
    cin >> A;

    cout << "enter rectangle diagonal D \n";
    cin >> D;  
 }
 float CaculateArea(float A, float D)
 {
   float Area = A * sqrt(pow(D, 2)-pow(A, 2));
    return Area;
 }
 void PrintResults(float Area)
 {
    cout << "The Rectangle Area is: " << Area << endl;
 }
 int main()
 {
    float A, D;
    ReadNumber(A, D);
    PrintResults(CaculateArea(A, D));

    return 0;
 }