#include <iostream>

using namespace std;

int main() {
    int number;
        cin >> number;

    for (int i = 1; i <= number+1; i++) {
        if (number % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}