#include <iostream>
#define br '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int a, b, c;
	cout << "Enter three numbers"<<br ;
	cin >> a >> b >> c;
	a=b*c;
	cout << "Claculating payroll..." << br << "result: "
	<< a;

	return 0;
}
/*	
	┌──(kali㉿kali)-[~/Desktop/sheet2]
	└─$ ./q16                            
	Enter three numbers
	1 2 5 
	Claculating payrol
	result: 10  
*/                                                                                
