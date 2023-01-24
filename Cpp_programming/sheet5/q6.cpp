#include <iostream>
using namespace std;


int main(int argc, const char** argv) {
    cout << "size of array: ";
    int n=0;
    cin >> n;
    int arr[n];
    int key = 0;
    cout << "enter numbers: ";
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter search number: ";
    cin >> key;

    for (int i = 0; i < n; ++i)
    {
        if (key == arr[i])
        {
            cout << "this number exists";
            return 0;
        }
    }
    cout << "it doesn't exist";
    return 0;
}