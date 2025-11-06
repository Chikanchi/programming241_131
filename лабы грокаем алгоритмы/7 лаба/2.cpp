#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Box {
    long long w, c;
};

int main() {
    int n;
    cin >> n;
    vector<Box> boxes(n);
    for (int i = 0; i < n; i++) {
        cin >> boxes[i].w >> boxes[i].c;
    }

    sort(boxes.begin(), boxes.end(), [](Box a, Box b){
        return (a.w + a.c) < (b.w + b.c);
    });

    long long sum = 0;
    int count = 0;
    for (auto box : boxes) {
        if (sum <= box.c) {
            sum += box.w;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
