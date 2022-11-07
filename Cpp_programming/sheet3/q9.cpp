#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int deg;
	cout << " Enter your degree \n" ;
	cin >> deg;
	switch (deg/10){
	case 10 : cout << "A+"; break;
    case 9 : cout << "A"; break;
    case 8 : cout << "B+"; break;
    case 7 : cout << "B"; break;
    case 6 : cout << "C+"; break;
    case 5 : cout << "C"; break;
    case 4 : cout << "D+"; break;
    case 3 : cout << "D"; break;
    case 2 : cout << "E+"; break;
    case 1 : cout << "E"; break;
    default : cout << "F?, what are you,a champanzee?";
}
	return 0;
}