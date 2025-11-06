#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROWS = 5;
const int COLS = 4;

int partition(int matrix[ROWS][COLS], int low, int high) {
    int pivot = matrix[high][0];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (matrix[j][0] <= pivot) {
            i++;
            int temp = matrix[i][0];
            matrix[i][0] = matrix[j][0];
            matrix[j][0] = temp;
        }
    }

    int temp = matrix[i + 1][0];
    matrix[i + 1][0] = matrix[high][0];
    matrix[high][0] = temp;

    return i + 1;
}

void sort(int matrix[ROWS][COLS], int low, int high) {
    if (low < high) {
        int pi = partition(matrix, low, high);
        sort(matrix, low, pi - 1);
        sort(matrix, pi + 1, high);
    }
}

int main() {
    srand(time(nullptr));

    int matrix[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            matrix[i][j] = rand() % (61 - 5 + 1) + 5;

    cout << "before:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    sort(matrix, 0, ROWS - 1);

    cout << "\nafter:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
