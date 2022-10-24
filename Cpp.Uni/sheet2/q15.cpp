#include <iostream>
#define br "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y;
	cout << "Enter two numbers" << br;
	cin >> x >> y;
	if(x%y == 0){
		cout << x << " is divisable by" << y;
	}else cout << x << " is not divisable by " << y;
	return 0;
}