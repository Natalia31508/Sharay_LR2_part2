#include <iostream>
#include "Sharay_MathTask.h"

using namespace std;

int main()
{
    while(true)
    {
        string std_input;
    cout << "input height X" << endl;
      getline (cin, std_input);
    if(!UserInput (std_input))
    break;
   
        double numberA = abs(stod(std_input));
    cout << "input height Y" << endl;
      getline (cin, std_input);
    if(!UserInput (std_input))

    break;
   
        double numberB = abs(stod(std_input));

         double a = CalcArith(numberA, numberB);
    double g = CalcGeom(numberA, numberB);
    cout << "Arifmeticheskaya progressiya is " << a << endl;
    cout << "Geometricheskaya progressiya is " << g << endl;
    }
   
   
}
