#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int aCount = (n % 2 == 1) ? n : n - 1;
    string result = "";
    int i = 0;
    while (i < aCount) {
        result += 'a';
        i++;
    }
    if (n % 2 == 0) {
        result += 'b';
    }
    cout << result << endl;
    return 0;
}