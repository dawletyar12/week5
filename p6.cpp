#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int zeros = 0;
    long long p = 5;

    while (p <= n) {
        zeros += n / p;
        p *= 5;
    }

    cout << zeros << endl;
    return 0;
}