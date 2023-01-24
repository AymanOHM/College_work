#include <iostream>
using namespace std;

float distance(float, float);

int main(int argc, char const *argv[])
{
	int n, m;
	cout << "please enter rate and time\n";
	cin >> n >> m;
	distance(n,m);
	cout << "distance is "<<distance(n,m);
	return 0;
}

float distance(float rate, float time){
	float dist = rate*time;
	return dist;
}