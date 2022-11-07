#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float commission;
	float sales;
	cout << "please enter sales\n";
	cin >> sales;
	if (sales >= 50000.00)
	{
		commission=0.2;
	}else{
		commission=0.1;
	}
	cout << "commission : " << commission;
	return 0;
}