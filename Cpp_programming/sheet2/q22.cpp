#include <iostream>
#define br "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "the numbers 1 -> 4 : " << br;
	//using one output statment
	cout << "12 34" << br;
	//using one output statment with four stream insertion operators
	cout << "1" << "2 " << "3" << "4\n";
	//using four output statments
	cout << "1"; 
	cout << "2 ";
	cout << "3"; 
	cout << "4";
	return 0;
}