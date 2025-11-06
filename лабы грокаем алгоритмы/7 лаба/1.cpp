#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int,int>> lectures(N);
    for (int i = 0; i < N; i++) {
        cin >> lectures[i].first >> lectures[i].second;
    }

    sort(lectures.begin(), lectures.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });

    int count = 0;
    int lastEnd = 0;
    for (auto lec : lectures) {
        if (lec.first >= lastEnd) {
            count++;
            lastEnd = lec.second;
        }
    }

    cout << count << endl;
    return 0;
}
