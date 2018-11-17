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

int main() {
    string s;
    getline(cin, s);

    cout << spaceRemover(s) << '\n';
    return 0;
}
