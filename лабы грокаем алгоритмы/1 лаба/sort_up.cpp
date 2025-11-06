#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int n = 10;
    int arr[n];

    srand(time(nullptr));

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % (103 - 2 + 1) + 2;
    }

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Сортировка по возрастанию: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
