#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	cout << "please enter x\n";
	cin >> x;
	if(x>=0 && x<=100){cout<<"The number is valid";}
	return 0;
}