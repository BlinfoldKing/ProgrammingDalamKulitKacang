#include <iostream>

using namespace std;

const string key[10] = { 
    "nol",
    "satu",
    "dua",
    "tiga",
    "empat",
    "lima",
    "enam",
    "tujuh",
    "delapan",
    "sembilan"
};

int main() {
    int n;
    cin >> n;

    cout << key[n] << '\n';;
    return 0;
}
