#include <iostream>
using namespace std;

int main() {
    const int N = 9;
    int arr[N] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};
    int sumNeg = 0;
    int min = arr[0];
    int max = arr[0];
    int mini = 0;
    int maxi = 0;
    int prodBetweenMinMax = 1;
    int prodEvenIndex = 1;
    int sumBetweenNeg = 0;
    int firstNegIndex = -1;
    int lastNegIndex = -1;

    // Find min, max, and sum of negative elements
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            sumNeg += arr[i];
            if (firstNegIndex == -1) {
                firstNegIndex = i;
            }
            lastNegIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            mini = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxi = i;
        }
        if (i % 2 == 0) {
            prodEvenIndex *= arr[i];
        }
    }

    // Calculate product of elements between min and max
    if (mini < maxi) {
        for (int i = mini + 1; i < maxi; i++) {
            prodBetweenMinMax *= arr[i];
        }
    } else {
        for (int i = maxi + 1; i < mini; i++) {
            prodBetweenMinMax *= arr[i];
        }
    }

    // Calculate sum of elements between first and last negative elements
    if (firstNegIndex != -1 && lastNegIndex != -1 && firstNegIndex != lastNegIndex) {
        for (int i = firstNegIndex + 1; i < lastNegIndex; i++) {
            sumBetweenNeg += arr[i];
        }
    }

    cout << "sum negative elements: " << sumNeg << endl;
    cout << "elements min and max elements: " << prodBetweenMinMax << endl;
    cout << "Product of elements with even indices: " << prodEvenIndex << endl;
    cout << "Sum of elements 1 and 9 negative: " << sumBetweenNeg << endl;
    
}