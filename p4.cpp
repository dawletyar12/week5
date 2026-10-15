#include <iostream>
using namespace std;

int main() {
    int numBottles, numExchange;
    cin >> numBottles >> numExchange;

    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newFull = empty / numExchange;
        total += newFull;
        empty = empty % numExchange + newFull;
    }

    cout << total << endl;
    return 0;
}