#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int amount1;
	int amount2;
	cout << "please enter 2 amounts\n";
	cin >> amount1 >>amount2;
	if (amount1 >10 && amount2 < 100)
	{
	  	(amount1>amount2)?cout<<amount1:cout<<amount2;
	}
	return 0;
}