#include < iostream›
#include "Sharay_MathTask.h"
using namespace std;
int main()
{
string std_Linput;
cout << "input height A" << endl; 
getline(cin, std _input);
while(!UserInput (std_input)) {
    cout << "input height A" << endl; 
    getline (cin, std_input);
    int numberA = stoi(str_input):
    cout << "input height B" << endl;
    getline(cin, std_input);
  while(!UserInput (std_input)) {
    cout << "input height B" << endl;
    getline(cin, std_input);
    }
int numberB = stoi(str_input);
int RectangleArea = CalcRectangleAre(numberA, numberB);
cout << "Area of Rectangle is " << RectangleArea << endl;
}