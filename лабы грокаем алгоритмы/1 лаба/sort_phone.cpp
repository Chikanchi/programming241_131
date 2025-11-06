#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 5;
    string phones[n] = { "23-45-67", "11-22-33", "99-00-12", "55-55-55", "44-12-87" };

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(phones[j] < phones[minIndex]) {
                minIndex = j;
            }
        }
        string temp = phones[i];
        phones[i] = phones[minIndex];
        phones[minIndex] = temp;
    }

    cout << "Телефоны по возрастанию: ";
    for(int i = 0; i < n; i++) {
        cout << phones[i] << " ";
    }

    return 0;
}
