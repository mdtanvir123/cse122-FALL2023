#include <iostream>
using namespace std;

int main() {
    string input_string;
    cin >> input_string;

    int count = 1;
    bool is_dangerous = false;

    for (int i = 1; i < input_string.length(); i++) {
        if (input_string[i] == input_string[i - 1]) {
            count++;
            if (count >= 7) {
                is_dangerous = true;
                break;
            }
        } else {
            count = 1;
        }
    }

    if (is_dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
