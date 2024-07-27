#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i';
}

int main() {
    string input;
    cin >> input;

    string result;
    for (char c : input) {
        if (!isVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << endl;

    return 0;
}
