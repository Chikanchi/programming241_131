#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    map<string, vector<string>> graph = {
        {"S", {"A", "B"}},
        {"A", {"S", "D", "E"}},
        {"B", {"S", "C"}},
        {"C", {"B", "J"}},
        {"D", {"A", "G"}},
        {"E", {"A", "F"}},
        {"F", {"E", "H"}},
        {"G", {"D", "H"}},
        {"H", {"G", "F", "J"}},
        {"J", {"C", "H", "I"}},
        {"I", {"J"}}
    };

    string start = "S";
    string finish = "I";

    queue<string> q;
    q.push(start);

    map<string, string> parent;
    parent[start] = "";

    while (!q.empty()) {
        string current = q.front();
        q.pop();

        if (current == finish)
            break;

        for (string next : graph[current]) {
            if (parent.find(next) == parent.end()) {
                parent[next] = current;
                q.push(next);
            }
        }
    }

    vector<string> path;
    string room = finish;
    while (room != "") {
        path.push_back(room);
        room = parent[room];
    }

    reverse(path.begin(), path.end());

    cout << "Кратчайший путь: ";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i];
        if (i < path.size() - 1) cout << " -> ";
    }
    cout << endl;

    cout << "Длина пути: " << path.size() - 1 << endl;

    return 0;
}
