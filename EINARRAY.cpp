#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[0];
        sum += arr[0];
    }
    cout << "P: " << sum << endl;
    
}
