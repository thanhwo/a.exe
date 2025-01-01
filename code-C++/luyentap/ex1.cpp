#include <iostream>
#include <string>
#include <vector>

using namespace std;

string rutGonXau(const string& s) {
    int lens = s.length();
    return s[0] + to_string(lens - 2) + s[lens - 1];
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Clear the newline character left in the buffer

    vector<string> input(n);
    for (int i = 0; i < n; i++) {
        getline(cin, input[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = input[i].length();
        if (len > 10) {
            cout << rutGonXau(input[i]) << '\n';
        } else {
            cout << input[i] << '\n';
        }
    }

    return 0;
}
