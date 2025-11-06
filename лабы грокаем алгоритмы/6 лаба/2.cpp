#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct Edge {
    int to;
};

int main() {
    int N;
    cin >> N;

    vector<int> cost(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> cost[i];

    int M;
    cin >> M;

    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    const int INF = INT_MAX;
    vector<int> dist(N + 1, INF);
    dist[1] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 1});

    while (!pq.empty()) {
        pair<int, int> top = pq.top();
        int curCost = top.first;
        int u = top.second;
        pq.pop();

        if (curCost > dist[u])
            continue;

        for (int v : graph[u]) {
            int newCost = curCost + cost[u];
            if (newCost < dist[v]) {
                dist[v] = newCost;
                pq.push({newCost, v});
            }
        }
    }

    if (dist[N] == INF)
        cout << -1 << endl;
    else
        cout << dist[N] << endl;

    return 0;
}
