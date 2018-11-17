#include <iostream>

using namespace std;

string spaceRemover(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && s[i] != '_') {
            res += s[i];
        }
    }
    return res;
}

string reverseString(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        res += s[s.length() - i - 1];
    }
    return res;
}

bool isPalindrome(string s) {
    return s == reverseString(s);
}

int main() {
    string s;
    getline(cin, s);

    if (isPalindrome(spaceRemover(s))) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    return 0;
}
