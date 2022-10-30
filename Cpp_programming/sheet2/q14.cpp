#include <iostream>
#define br "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	cout << "Enter a numbers\n";
	cin >> x ;
	if(x%2 == 0){
		cout << x << " is even";
	}else cout << x << " is odd";
	return 0;
}