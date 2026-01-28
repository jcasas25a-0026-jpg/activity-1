#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];

        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "The even numbers are: " << evenCount << endl;
    cout << "The odd numbers: " << oddCount << endl;

    return 0;
}
