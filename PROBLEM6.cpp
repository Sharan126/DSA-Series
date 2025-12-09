//Find Maximum
#include <bits/stdc++.h>
using namespace std;
int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int x, y , z;
    cin >> x >> y >> z;
    int max = findMax(x, y, z);
    cout << "Maximum is: " << max << endl;
    return 0;
}