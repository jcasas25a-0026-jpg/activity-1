#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter number " << i + ": ";
        cin >> numbers[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
