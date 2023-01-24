#include <iostream>
using namespace std;

void timesTen(int);

int main(int argc, char const *argv[])
{
	int n;
	cout << "please enter a number\n";
	cin >> n;
	timesTen(n);
	return 0;
}

void timesTen(int number){
	cout<<number*10;
}