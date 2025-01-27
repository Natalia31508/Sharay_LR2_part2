#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Sharay_MathTask.h"
using namespace cute;

void testCalcArith()
{
    int x = 3;
    int y = 5;
    int expected = 4;
    int actual = CalcArith(x, y);
    ASSERT_EQUAL (expected, actual);
}

void testCalcGeom()
{
    int x = 4;
    int y = 4;
    int expected = 4;
    int actual = CalcGeom(x, y);
    ASSERT_EQUAL (expected, actual);
}


void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actuale = UserInput(str);
    ASSERT_EQUAL(expected, actuale);
}
void testUserInput_Letter() {
    string str = "a";
    bool expected = false;
    bool actuale = UserInput(str);
    ASSERT_EQUAL(expected, actuale);
}
void testUserInput_NegativeValue() {
    string str = "-5";
    bool expected = false;
    bool actuale = UserInput(str);
    ASSERT_EQUAL(expected, actuale);
}
int main() {
    suite s;
    s.push_back (CUTE(testCalcArith));
    s.push_back (CUTE(testCalcGeom));
    s.push_back (CUTE(testUserInput_Empty));
    s.push_back (CUTE(testUserInput_Letter));
    s.push_back (CUTE(testUserInput_NegativeValue));
    ide_listener<> listener;
    makeRunner(listener)(s, "All Progression Test");
    return 0;
}