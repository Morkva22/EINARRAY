#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    int furion [MONTHS];

    cout << "Enter the furion for each month:" << endl;
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Month " << i + 1 << ": ";
        cin >> furion[i];
    }
    
    int startMonth, endMonth;
    cout << "Enter the start month: ";
    cin >> startMonth;
    cout << "Enter the end month: ";
    cin >> endMonth;

    startMonth--;
    endMonth--;

    int minFurion = furion[startMonth];
    int maxFurion = furion[startMonth];
    int minMonth = startMonth;
    int maxMonth = startMonth;

    for (int i = startMonth + 1; i <= endMonth; ++i) {
        if (furion[i] < minFurion) {
            minFurion = furion[i];
            minMonth = i;
        }
        if (furion[i] > maxFurion) {
            maxFurion = furion[i];
            maxMonth = i;
        }
    }

    cout << "Minimum furion is in month " << minMonth + 1 << " with a furion of " << minFurion << endl;
    cout << "Maximum furion is in month " << maxMonth + 1 << " with a furion of " << maxFurion << endl;

    return 0;
}