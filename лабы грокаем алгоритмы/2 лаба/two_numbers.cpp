#include <iostream>
using namespace std;

void rec(int A, int B) {
    cout << A << " ";
    if (A == B) return;
    if (A < B)
        rec(A + 1, B);
    else
        rec(A - 1, B);
}

int main() {
    int A, B;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;

    rec(A, B);

    cout << endl;
    return 0;
}
