#include <bits/stdc++.h>
using namespace std;

int main() {
    float P, T, R;

    // input values
    cin >> P >> T >> R;

    // calculate simple interest
    float SI = (P * T * R) / 100;

    cout << "Simple Interest is: " << SI << endl;

    return 0;
}
