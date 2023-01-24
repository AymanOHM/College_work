#include <iostream>
using namespace std;


int main(int argc, const char** argv) {
    
    int arr[3][3] = {1, 3, 6, 3, 7, 0, 4, 8, 1};
    for (int i = 0; i < 3; i++)
    {
        int max =arr[i][0];
        for (int j = 1; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        cout << "the largest in row" << i << "is: " << max << endl;
    }
    
    return 0;
}