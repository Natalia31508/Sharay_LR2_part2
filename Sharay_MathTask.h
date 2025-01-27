#include <string>

using namespace std;

bool UserInput(string input) { 
    if (input.empty()) return false;
    try {
        int number = stod(input);
        if (number < 0)
        return false;
    }
catch(...)
{return false;}
return true;}

double CalcArith(double num_x, double num_y)
{
    return (num_x+ num_y)/2;
}

double CalcGeom(double num_x, double num_y)
{
    return sqrt(num_x * num_y);
}