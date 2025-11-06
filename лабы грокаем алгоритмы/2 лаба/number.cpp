#include <iostream>
using namespace std;

void rec(int n, int current = 1) {
    if (current > n) return;
    cout << current << " ";
    rec(n, current + 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    rec(n);

    return 0;
}
