#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int a, b;

public:
    point(int c, int x)
    {
        a = c;
        b = x;
        printit();
    }
    void printit()
    {
        cout << endl
             << "The point is : ( " << a << " , " << b << " )" << endl;
    }
    friend void distance(point, point);
};
void distance(point z, point q)
{
    float answer = pow((pow((z.a - q.a), 2) + pow((z.b - q.b), 2)), 0.5);
    cout << endl
         << endl
         << "After alot of calculations and formulation , i found that the distance between given two points is : " << answer << endl;
}
int main()
{
    int a, b, c, d;
    cout << endl
         << endl
         << "Hello there, this program will help you in finding the distance between any two points in cartesian plane ." << endl
         << "And to do so i firstly request you to tell me the points" << endl
         << endl;
    cout << "Firstly tell me the coordinates of point a :--" << endl;
    cin >> a;
    cin >> b;
    cout << endl
         << "Now, please tell me the co-ordinates of point b :--" << endl;
    cin >> c;
    cin >> d;
    point a1(a, b);
    point b1(c, d);
    distance(a1, b1);
    return 0;
}