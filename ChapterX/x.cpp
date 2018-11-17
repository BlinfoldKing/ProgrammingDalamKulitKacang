#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> Y;
    vector<int> X;

    for (int i = 0; i < N; i++ ) {
        int tmp;
        cin >> tmp;

        Y.push_back(tmp);
    }
    sort(Y.begin(), Y.end());

    for (int i = 0; i < M; i++ ) {
        int tmp;
        cin >> tmp;

        X.push_back(tmp);
    }
    sort(X.begin(), X.end());

    bool found = false; 
    int res = 0;
    int a1, a2;

    for (int i = 0; i < N && !found; i++) {
        a1 = 0;
        a2 = M - 1;
        while (!found && a1 < a2) {
            int total = X[a1] + X[a2];
            if (total == Y[i]) {
                found = true;
                res = Y[i];
            }
            else if (total > Y[i])
                a2--;
            else if (total < Y[i])
                a1++;
        }
    }

    if (found)
        cout << res << ' ' << X[a1] << ' ' << X[a2] << '\n';
    else
        cout << "GA SARAPAN";

    return 0;
}

