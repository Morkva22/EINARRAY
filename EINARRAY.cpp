#include <iostream>
#include <ctime>
using namespace std;

void main()
{
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 912;
        cout<< arr[i] << " ";
    }
    cout <<endl;

    int min = arr[0];
    int max = arr[0];

    for (int i=1; i < SIZE; i++)
    {
        if ( arr[i] < min)
        {
            min = arr[i];
        }
        if ( arr[i] > max)
        {
            max = arr[i];
        }
    }
        cout << "Min: " << min << endl;
        cout << "Max: " << max << endl;
    }

