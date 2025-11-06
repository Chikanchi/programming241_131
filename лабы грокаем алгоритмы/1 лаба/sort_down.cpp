#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int arr[n];

    srand(time(nullptr));

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 101;
    }

    for(int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    cout << "Сортировка по убыванию: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
