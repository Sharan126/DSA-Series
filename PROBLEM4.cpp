//Write a program that reads user input and prints the square of each integer
#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    int num_seq[size];
    for (int i = 0; i < size; i++) {
        cin >> num_seq[i];
}
    for (int each_item : num_seq) {
        cout << each_item * each_item << endl;
    }
    return 0;
}