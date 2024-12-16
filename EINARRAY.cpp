#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    
    cout << "negative ";
    for (int i = SIZE - 1; i >= 0; i--){
        cout << arr[i];
    }
    cout<< endl;
}
