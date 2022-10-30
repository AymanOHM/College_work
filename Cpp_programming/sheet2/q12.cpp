#include <iostream>
#define br "\n"
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y;
    cout << "input 2 numbers please" << br;
    cin >> x >>y ;
    if (x>y){
    	cout << x << " is greater than " << y;

    	}
    else if(x<y){
    	cout << y << " is greater than " << x;
    	}
    else 	cout << y << " is equal to " << x;
    	
	return 0;
}