#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int run = 0, best = 0;
    int i = 0;
    while (i < n) {
        int v;
        cin >> v;
        i++;

        if (v == 0) {
            run = 0;
            continue;
        }

        run++;
        if (run > best) best = run;
    }

    cout << best << endl;
    return 0;
}