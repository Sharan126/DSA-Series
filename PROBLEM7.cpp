//Sum Of Digits
#include <bits/stdc++.h>
using namespace std;
int SumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;
    cin >> num;
    int result = SumOfDigits(num);
    cout << result << endl;
    return 0;
}