#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 6;
    int furion [MONTHS];

    cout << "Enter the furion for each month:" << endl;
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Month " << i + 1 << ": ";
        cin >> furion[i];
    }
    int sum = 0;
    for (int i = 0; i < MONTHS; ++i) {
        sum += furion[i];
    }

    cout << "furion in month " << sum + 1 << " with a furion of " << sum << endl;
}