#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;
    string q;

public:
    float simplecalculation(string s, int a1, int b1)
    {
        a = a1;
        b = b1;
        q = s;
        if (q == "Sum")
        {
            return a + b;
        }
        if (q == "Subtract")
        {
            return a - b;
        }
        if (q == "Multiply")
        {
            return a * b;
        }
        if (q == "Divide")
        {
            return (float)a / b;
        }
    }
};
class ScientificCalculator
{
protected:
    int x;
    int y;
    string q1;

public:
    float scientificcalculation(string h, int x1, int y1)
    {
        x = x1;
        y = y1;
        q1 = h;
        if (q1 == "Power")
        {
            return pow(x, y);
        }
        if (q1 == "Undeerroot")
        {
            return pow(x, (1 / (float)y));
        }
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void Result(string aa, string bb, int aaa, int bbb)
    {
        if (aa == "Simple")
        {
            cout << "The answer for given operation is : " << simplecalculation(bb, aaa, bbb) << endl;
        }
        if (aa == "Scientific")
        {
            cout << "The answer for given operation is : " << scientificcalculation(bb, aaa, bbb) << endl;
        }
    }
};
int main()
{

    HybridCalculator Ultimate;
    string aaaa, bbbb, close;
    int aaaaa, bbbbb;
    do
    {
        cout << "Hello there!" << endl
             << "This program will help you in doing some simple and scientific calcultaions" << endl;
        cout << "For doing so , you have to firstly tell us which type of calculations you want" << endl
             << "1. Simple" << endl
             << "2. Scientific" << endl;
        cout << "Please , type it here : ";
        cin >> aaaa;
        if (aaaa == "Simple")
        {
            cout << "As you have chosen the simple calculation , you can do\n1. Sum\n2. Subtract\n3. Mutiply\n4. Divide" << endl;
            cout << "Please tell me which operation do you want to perform : ";
            cin >> bbbb;
        }
        if (aaaa == "Scientific")
        {
            cout << "As you have chosen the Scientific calculation , you can find \n1. Power\n2. Underroot" << endl;
            cout << "Please tell me which operation do you want to perform : ";
            cin >> bbbb;
        }
        cout << "Now,please enter the first value : ";
        cin >> aaaaa;
        cout << "Now,please enter the second value : ";
        cin >> bbbbb;
        Ultimate.Result(aaaa, bbbb, aaaaa, bbbbb);
        cout << "If you want to close the program , please type bandkar , else hit any key : ";
        cin >> close;
    } while (close != "bandkar");

    return 0;
}