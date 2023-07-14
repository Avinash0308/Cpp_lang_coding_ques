#include <iostream>
using namespace std;

class simple_interest
{
    int principal_amt;
    int years;
    float rate;
    int returnvalue;

public:
    simple_interest(){}
    simple_interest(int money, int years_, int rate_);
    simple_interest(int money, int years_, float rate_);
    void the_final_money(void);
};
simple_interest ::simple_interest(int money, int years_, float rate_)
{
    principal_amt = money;
    years = years_;
    rate = rate_ / 100;
    returnvalue = principal_amt;
    for (int i = 1; i <= years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
    the_final_money();
}
simple_interest ::simple_interest(int money, int years_, int rate_)
{
    principal_amt = money;
    years = years_;
    rate = (float)rate_ / 100;

    returnvalue = principal_amt;
    for (int i = 1; i <= years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
    the_final_money();
}

void simple_interest ::the_final_money(void)
{
    cout << "The return value that you will get for depositing Rs " << principal_amt << " for " << years << " years at the rate of " << rate << " per annum is :: " << returnvalue << endl;
}
int main()
{
    simple_interest a ,b;
    int pr_amt;
    int time;
    int rate;
    cout << endl
         << endl
         << "Hello there, this program will help you in calculating your final money over the given period of time :-)" << endl;
    cout << "To do so , please tell me the money you want to deposit as your principal amount : ";
    cin >> pr_amt;
    cout << "Now, tell me the time period for which you are depositing the money : ";
    cin >> time;
    cout << "What interest rate the bank is providing to you : ";
    cin >> rate;
    cout << "Happy times, we will provide you with 0.5 % more interest rate than your bank and we will show both of the resutlt to you" << endl
         << endl;
    float ratee = rate + 0.5;
     a = simple_interest(pr_amt, time, rate);
     b = simple_interest(pr_amt, time, ratee);
    return 0;
}