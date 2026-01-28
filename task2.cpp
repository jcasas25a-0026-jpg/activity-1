#include <iostream>
using namespace std;

int main() {
    int prices[5];
    int total = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter price of item " << i + 1 << ": ";
        cin >> prices[i];
        total += prices[i];
    }

    cout << "Total sum of all items: " << total << endl;

    return 0;
}
