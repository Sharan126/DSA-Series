//Swap Two Numbers
#include <iostream>
using namespace std;
void interchange(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    interchange(x, y);
    cout << x << " " << y << endl;
    return 0;
}