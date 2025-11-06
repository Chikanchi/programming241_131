#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    unordered_set<int> numbers;
    int x;

    while (fin >> x) {
        if (x > 0) {
            numbers.insert(x);
        } else if (x < 0) {
            numbers.erase(-x);
        } else {
            vector<int> result(numbers.begin(), numbers.end());
            sort(result.begin(), result.end());
            for (size_t i = 0; i < result.size(); i++) {
                if (i > 0) fout << " ";
                fout << result[i];
            }
            fout << endl;
            break;
        }
    }

    fin.close();
    fout.close();

    return 0;
}
