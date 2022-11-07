#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int speed;
	cout << "please enter speed\n";
	cin >> speed;
	if(speed < 0 || speed > 200){cout << "The number is not valid";}
	return 0;
}