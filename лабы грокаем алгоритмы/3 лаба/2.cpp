#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        sort(arr, low, pi - 1);
        sort(arr, pi + 1, high);
    }
}

int main() {
    const int N = 20;
    int arr[N];

    srand(time(nullptr));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % (100 - 50 + 1) + 50;
    }

    cout << "Original array: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    sort(arr, 0, N - 1);

    cout << "Sorted array:   ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
