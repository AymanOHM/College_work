#include <iostream>
using namespace std;

int maxNumber (int n){
	int max =0;
	for (int i = 1; i <= n; i++)
	{
		max += i;
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter number of integers\n";
	cin >> n;
	cout << "the maximum is " << maxNumber(n);
	return 0;
}