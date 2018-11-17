#include <iostream>

using namespace std;

int getFib(int n) {
    if (n <= 1)
        return n;
    return getFib(n - 1) + getFib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << getFib(n) << '\n';
    return 0;
}
