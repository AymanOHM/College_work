#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char** argv) {
    
    int table[3][4] = {{2,3}, {7,9,2}, {1}};
    cout << "---------------------" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "|" << table[i][j];
        }
        cout << "|" << endl;
    }cout << "---------------------" << endl;

    return 0;
}