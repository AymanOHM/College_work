#include <iostream>
#include <math.h>
#include <string>
using namespace std;
#ifndef br
#define br "\n"
#endif

int main(int argc, char const *argv[])
{
	int x = 0;
	int sum = 0;
	do
	{
		cin >> x ;
		sum+=x;
	} while (sum <= 300);
	cout << "the sum is : " << sum;
	return 0;
}