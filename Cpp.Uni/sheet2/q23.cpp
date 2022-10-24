#include <iostream>
#define br "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, z ,sml, lrg;
	cout << "Input three different intgers: ";
	cin >> x >> y >> z;
	cout << "Sum is " << x+y+z << br;
	cout << "Average is " << (x+y+z)/3 << br;
	cout << "Product is " << x*y*z << br;
	if(x<y){
		if(x<z){
			sml=x;
		}else sml=z;
	}else if(y<z){
		sml=y;
	}else sml=z;
	cout << "Smallest is " << sml<< br;
    if(x>y){
		if(x>z){
			lrg=x;
		}else lrg=z;
	}else if(y>z){
		lrg=y;
	}else lrg=z;
		cout << "Largest is " << lrg<< br;

	return 0;
}