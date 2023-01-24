#include <iostream>
using namespace std;

double avgsalary (int arr[]){
    int sum = 0;
    for (size_t i = 0; i < 6; i++)
    {
            sum+=arr[i];
    }
    return sum/6;
}
int main(int argc, const char** argv) {
    int arr[6];
    cout << "enter 6 salaries";
    for (size_t i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << avgsalary(arr);
    return 0;
}