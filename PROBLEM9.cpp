//Compare Two Pairs
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    // Compare first elements
    if (a > x) {
        cout << "(" << a << ", " << b << ") is the greater pair";
    }
    else if (x > a) {
        cout << "(" << x << ", " << y << ") is the greater pair";
    }
    else {
        // If first elements are equal → compare second elements
        if (b > y) {
            cout << "(" << a << ", " << b << ") is the greater pair";
        }
        else if (y > b) {
            cout << "(" << x << ", " << y << ") is the greater pair";
        }
        else {
            cout << "Both pairs are equal";
        }
    }

    return 0;
}

