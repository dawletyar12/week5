#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << "false" << endl;
        return 0;
    }
    int original = x;
    long long reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    if (reversed == original) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}