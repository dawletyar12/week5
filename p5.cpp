#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int b = 0, a = 0, l = 0, o = 0, nn = 0;

    for (int i = 0; i < (int)s.size(); i++) {
        switch (s[i]) {
            case 'b': b++;  break;
            case 'a': a++;  break;
            case 'l': l++;  break;
            case 'o': o++;  break;
            case 'n': nn++; break;
            default: break;
        }
    }

    int result = min(min(b, a), min(min(l / 2, o / 2), nn));
    cout << result << endl;
    return 0;
}