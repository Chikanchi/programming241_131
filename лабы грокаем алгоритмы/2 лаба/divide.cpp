#include <iostream>
using namespace std;

void rec(int n, int i = 2)
{
  if (n == 1)
  {
    return;
  }
    if (n % i == 0)
    {
        cout << i << " ";
        rec(n / i, i);
    }
    else 
    {
        rec(n, i + 1);
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    rec(n);
    cout << endl;
    return 0;
}