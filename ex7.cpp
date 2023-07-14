#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int TestCase;
	// int initialValue=1;
	cin >> TestCase;
	while (TestCase--)
	{
		int NoOfSweets, ChefMoney;
		cin >> NoOfSweets >> ChefMoney;
		int RateofSweet[NoOfSweets], CashBack[NoOfSweets];
		for (int a = 0; a < NoOfSweets; a++)
		{
			cin >> RateofSweet[a];
		}
		for (int a = 0; a < NoOfSweets; a++)
		{
			cin >> CashBack[a];
		}
		// int value[NoOfSweets], money, returnm;
		// int r = 100000;
		// for (int a = 0; a < NoOfSweets; a++)
		// {
		// 	value[a] = RateofSweet[a] - CashBack[a];
		// }
		// for (int i = 0; i < NoOfSweets; i++)
		// {
		// 	if (r < value[i])
		// 	{
				
		// 	}
			
		// }
	}
	return 0;
}