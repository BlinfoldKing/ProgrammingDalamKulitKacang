#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0)
                cout << "Fizz";
            if (i % 5 == 0)
                cout << "Buzz";
        } else {
            cout << i;
        }
        
        cout << ' ';
    }

    cout << '\n';
    return 0;
}
